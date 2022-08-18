package cimgui

// #cgo CPPFLAGS: -DCIMGUI_DEFINE_ENUMS_AND_STRUCTS
// #cgo amd64,linux LDFLAGS: ${SRCDIR}/lib/linux/x64/cimgui.a
// #cgo amd64,windows LDFLAGS: -L${SRCDIR}/lib/windows/x64 -l:cimgui.a
// #cgo amd64,darwin LDFLAGS: ${SRCDIR}/lib/macos/x64/cimgui.a
// #cgo arm64,darwin LDFLAGS: ${SRCDIR}/lib/macos/arm64/cimgui.a
// #include "cimgui_wrapper.h"
import "C"
