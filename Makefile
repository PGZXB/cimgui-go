NAME=cimgui-go Code Generator

.PHONY: all

## all: generates both bindings.
all: generate

# Parameters:
# $1: prefix
# $2: include path (of header file)
# $3: definitions.json filepath
# $4: structs_and_enums.json filepath
# $5: additional agruments to codegen call (e.g. -r option)
define generate
	@echo "Generating for $(1)"
	go run github.com/AllenDang/cimgui-go/cmd/codegen -p $(1) -i $(2) -d $(3) -e $(4) $(5)
	go run mvdan.cc/gofumpt@latest -w $(1)_enums.go
	go run mvdan.cc/gofumpt@latest -w $(1)_structs.go
	go run mvdan.cc/gofumpt@latest -w $(1)_funcs.go
endef

## cimgui: generate cimgui binding
.PHONY: cimgui
cimgui:
	$(call generate,cimgui,cimgui/cimgui.h,cimgui/generator/output/definitions.json,cimgui/generator/output/structs_and_enums.json)

## cimplot: generate implot binding
.PHONY: cimplot
cimplot:
	$(call generate,cimplot,cimplot/cimplot.h,cimplot/generator/output/definitions.json,cimplot/generator/output/structs_and_enums.json,-r cimgui/generator/output/structs_and_enums.json)

compile_cimgui_macos:
	rm -rf ./cimgui/build
	cd ./cimgui; cmake -Bbuild -DCMAKE_BUILD_TYPE=Release -DIMGUI_STATIC=On -DCMAKE_OSX_ARCHITECTURES=arm64
	cd ./cimgui/build; make
	cp -f ./cimgui/build/cimgui.a ./lib/macos/arm64/

## generate: generates both bindings (equal to `all`)
.PHONY: generate
generate: cimgui cimplot


.PHONY: update
update:
	rm -f VERSION.txt
	rm -rf cimgui/
	git clone --recurse-submodules git@github.com:cimgui/cimgui
	cd cimgui; \
		echo "cimgui at $(git rev-parse HEAD)" >> ../VERSION.txt; \
		rm -rf .git
	cd cimgui/imgui; \
		echo "cimgui/imgui at `git rev-parse HEAD`" >> ../../VERSION.txt; \
		rm -rf .git
	cd cimgui/generator; \
		./generator.sh -DIMGUI_USE_WCHAR32; \
		cp output/*h ..
