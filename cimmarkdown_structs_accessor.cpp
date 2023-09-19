// Code generated by cmd/codegen from https://github.com/AllenDang/cimgui-go.
// DO NOT EDIT.


#include <string.h>
#include "cimmarkdown_wrapper.h"
#include "cimmarkdown_structs_accessor.h"

void wrap_Emphasis_SetState(Emphasis *EmphasisPtr, EmphasisState v) { EmphasisPtr->state = v; }
EmphasisState wrap_Emphasis_GetState(Emphasis *self) { return self->state; }
void wrap_Emphasis_SetText(Emphasis *EmphasisPtr, TextBlock v) { EmphasisPtr->text = v; }
TextBlock wrap_Emphasis_GetText(Emphasis *self) { return self->text; }
void wrap_Emphasis_SetSym(Emphasis *EmphasisPtr, char v) { EmphasisPtr->sym = v; }
char wrap_Emphasis_GetSym(Emphasis *self) { return self->sym; }
void wrap_Line_SetIsHeading(Line *LinePtr, bool v) { LinePtr->isHeading = v; }
bool wrap_Line_GetIsHeading(Line *self) { return self->isHeading; }
void wrap_Line_SetIsEmphasis(Line *LinePtr, bool v) { LinePtr->isEmphasis = v; }
bool wrap_Line_GetIsEmphasis(Line *self) { return self->isEmphasis; }
void wrap_Line_SetIsUnorderedListStart(Line *LinePtr, bool v) { LinePtr->isUnorderedListStart = v; }
bool wrap_Line_GetIsUnorderedListStart(Line *self) { return self->isUnorderedListStart; }
void wrap_Line_SetIsLeadingSpace(Line *LinePtr, bool v) { LinePtr->isLeadingSpace = v; }
bool wrap_Line_GetIsLeadingSpace(Line *self) { return self->isLeadingSpace; }
void wrap_Line_SetLeadSpaceCount(Line *LinePtr, int v) { LinePtr->leadSpaceCount = v; }
int wrap_Line_GetLeadSpaceCount(Line *self) { return self->leadSpaceCount; }
void wrap_Line_SetHeadingCount(Line *LinePtr, int v) { LinePtr->headingCount = v; }
int wrap_Line_GetHeadingCount(Line *self) { return self->headingCount; }
void wrap_Line_SetEmphasisCount(Line *LinePtr, int v) { LinePtr->emphasisCount = v; }
int wrap_Line_GetEmphasisCount(Line *self) { return self->emphasisCount; }
void wrap_Line_SetLineStart(Line *LinePtr, int v) { LinePtr->lineStart = v; }
int wrap_Line_GetLineStart(Line *self) { return self->lineStart; }
void wrap_Line_SetLineEnd(Line *LinePtr, int v) { LinePtr->lineEnd = v; }
int wrap_Line_GetLineEnd(Line *self) { return self->lineEnd; }
void wrap_Line_SetLastRenderPosition(Line *LinePtr, int v) { LinePtr->lastRenderPosition = v; }
int wrap_Line_GetLastRenderPosition(Line *self) { return self->lastRenderPosition; }
void wrap_Link_SetState(Link *LinkPtr, LinkState v) { LinkPtr->state = v; }
LinkState wrap_Link_GetState(Link *self) { return self->state; }
void wrap_Link_SetText(Link *LinkPtr, TextBlock v) { LinkPtr->text = v; }
TextBlock wrap_Link_GetText(Link *self) { return self->text; }
void wrap_Link_SetUrl(Link *LinkPtr, TextBlock v) { LinkPtr->url = v; }
TextBlock wrap_Link_GetUrl(Link *self) { return self->url; }
void wrap_Link_SetIsImage(Link *LinkPtr, bool v) { LinkPtr->isImage = v; }
bool wrap_Link_GetIsImage(Link *self) { return self->isImage; }
void wrap_Link_SetNum_brackets_open(Link *LinkPtr, int v) { LinkPtr->num_brackets_open = v; }
int wrap_Link_GetNum_brackets_open(Link *self) { return self->num_brackets_open; }
void wrap_MarkdownConfig_SetLinkCallback(MarkdownConfig *MarkdownConfigPtr, MarkdownLinkCallback* v) { MarkdownConfigPtr->linkCallback = v; }
MarkdownLinkCallback* wrap_MarkdownConfig_GetLinkCallback(MarkdownConfig *self) { return self->linkCallback; }
void wrap_MarkdownConfig_SetTooltipCallback(MarkdownConfig *MarkdownConfigPtr, MarkdownTooltipCallback* v) { MarkdownConfigPtr->tooltipCallback = v; }
MarkdownTooltipCallback* wrap_MarkdownConfig_GetTooltipCallback(MarkdownConfig *self) { return self->tooltipCallback; }
void wrap_MarkdownConfig_SetImageCallback(MarkdownConfig *MarkdownConfigPtr, MarkdownImageCallback* v) { MarkdownConfigPtr->imageCallback = v; }
MarkdownImageCallback* wrap_MarkdownConfig_GetImageCallback(MarkdownConfig *self) { return self->imageCallback; }
void wrap_MarkdownConfig_SetLinkIcon(MarkdownConfig *MarkdownConfigPtr, const char* v) { MarkdownConfigPtr->linkIcon = v; }
const char* wrap_MarkdownConfig_GetLinkIcon(MarkdownConfig *self) { return self->linkIcon; }
void wrap_MarkdownConfig_Set](MarkdownConfig *MarkdownConfigPtr, MarkdownHeadingFormat headingFormats[ NUMHEADINGS v) { MarkdownConfigPtr->] = v; }
MarkdownHeadingFormat headingFormats[ NUMHEADINGS wrap_MarkdownConfig_Get](MarkdownConfig *self) { return self->]; }
void wrap_MarkdownConfig_SetUserData(MarkdownConfig *MarkdownConfigPtr, void* v) { MarkdownConfigPtr->userData = v; }
void* wrap_MarkdownConfig_GetUserData(MarkdownConfig *self) { return self->userData; }
void wrap_MarkdownConfig_SetFormatCallback(MarkdownConfig *MarkdownConfigPtr, MarkdownFormalCallback* v) { MarkdownConfigPtr->formatCallback = v; }
MarkdownFormalCallback* wrap_MarkdownConfig_GetFormatCallback(MarkdownConfig *self) { return self->formatCallback; }
void wrap_MarkdownFormatInfo_SetType(MarkdownFormatInfo *MarkdownFormatInfoPtr, MarkdownFormatType v) { MarkdownFormatInfoPtr->type = v; }
MarkdownFormatType wrap_MarkdownFormatInfo_GetType(MarkdownFormatInfo *self) { return self->type; }
void wrap_MarkdownFormatInfo_SetLevel(MarkdownFormatInfo *MarkdownFormatInfoPtr, int32_t v) { MarkdownFormatInfoPtr->level = v; }
int32_t wrap_MarkdownFormatInfo_GetLevel(MarkdownFormatInfo *self) { return self->level; }
void wrap_MarkdownFormatInfo_SetItemHovered(MarkdownFormatInfo *MarkdownFormatInfoPtr, bool v) { MarkdownFormatInfoPtr->itemHovered = v; }
bool wrap_MarkdownFormatInfo_GetItemHovered(MarkdownFormatInfo *self) { return self->itemHovered; }
void wrap_MarkdownFormatInfo_SetConfig(MarkdownFormatInfo *MarkdownFormatInfoPtr, const MarkdownConfig* v) { MarkdownFormatInfoPtr->config = v; }
const MarkdownConfig* wrap_MarkdownFormatInfo_GetConfig(MarkdownFormatInfo *self) { return self->config; }
void wrap_MarkdownHeadingFormat_SetFont(MarkdownHeadingFormat *MarkdownHeadingFormatPtr, ImFont* v) { MarkdownHeadingFormatPtr->font = v; }
ImFont* wrap_MarkdownHeadingFormat_GetFont(MarkdownHeadingFormat *self) { return self->font; }
void wrap_MarkdownHeadingFormat_SetSeparator(MarkdownHeadingFormat *MarkdownHeadingFormatPtr, bool v) { MarkdownHeadingFormatPtr->separator = v; }
bool wrap_MarkdownHeadingFormat_GetSeparator(MarkdownHeadingFormat *self) { return self->separator; }
void wrap_MarkdownImageData_SetIsValid(MarkdownImageData *MarkdownImageDataPtr, bool v) { MarkdownImageDataPtr->isValid = v; }
bool wrap_MarkdownImageData_GetIsValid(MarkdownImageData *self) { return self->isValid; }
void wrap_MarkdownImageData_SetUseLinkCallback(MarkdownImageData *MarkdownImageDataPtr, bool v) { MarkdownImageDataPtr->useLinkCallback = v; }
bool wrap_MarkdownImageData_GetUseLinkCallback(MarkdownImageData *self) { return self->useLinkCallback; }
void wrap_MarkdownImageData_SetUser_texture_id(MarkdownImageData *MarkdownImageDataPtr, ImTextureID v) { MarkdownImageDataPtr->user_texture_id = v; }
ImTextureID wrap_MarkdownImageData_GetUser_texture_id(MarkdownImageData *self) { return self->user_texture_id; }
void wrap_MarkdownImageData_SetSize(MarkdownImageData *MarkdownImageDataPtr, ImVec2 v) { MarkdownImageDataPtr->size = v; }
ImVec2 wrap_MarkdownImageData_GetSize(MarkdownImageData *self) { return self->size; }
void wrap_MarkdownImageData_SetUv0(MarkdownImageData *MarkdownImageDataPtr, ImVec2 v) { MarkdownImageDataPtr->uv0 = v; }
ImVec2 wrap_MarkdownImageData_GetUv0(MarkdownImageData *self) { return self->uv0; }
void wrap_MarkdownImageData_SetUv1(MarkdownImageData *MarkdownImageDataPtr, ImVec2 v) { MarkdownImageDataPtr->uv1 = v; }
ImVec2 wrap_MarkdownImageData_GetUv1(MarkdownImageData *self) { return self->uv1; }
void wrap_MarkdownImageData_SetTint_col(MarkdownImageData *MarkdownImageDataPtr, ImVec4 v) { MarkdownImageDataPtr->tint_col = v; }
ImVec4 wrap_MarkdownImageData_GetTint_col(MarkdownImageData *self) { return self->tint_col; }
void wrap_MarkdownImageData_SetBorder_col(MarkdownImageData *MarkdownImageDataPtr, ImVec4 v) { MarkdownImageDataPtr->border_col = v; }
ImVec4 wrap_MarkdownImageData_GetBorder_col(MarkdownImageData *self) { return self->border_col; }
void wrap_MarkdownLinkCallbackData_SetText(MarkdownLinkCallbackData *MarkdownLinkCallbackDataPtr, const char* v) { MarkdownLinkCallbackDataPtr->text = v; }
const char* wrap_MarkdownLinkCallbackData_GetText(MarkdownLinkCallbackData *self) { return self->text; }
void wrap_MarkdownLinkCallbackData_SetTextLength(MarkdownLinkCallbackData *MarkdownLinkCallbackDataPtr, int v) { MarkdownLinkCallbackDataPtr->textLength = v; }
int wrap_MarkdownLinkCallbackData_GetTextLength(MarkdownLinkCallbackData *self) { return self->textLength; }
void wrap_MarkdownLinkCallbackData_SetLink(MarkdownLinkCallbackData *MarkdownLinkCallbackDataPtr, const char* v) { MarkdownLinkCallbackDataPtr->link = v; }
const char* wrap_MarkdownLinkCallbackData_GetLink(MarkdownLinkCallbackData *self) { return self->link; }
void wrap_MarkdownLinkCallbackData_SetLinkLength(MarkdownLinkCallbackData *MarkdownLinkCallbackDataPtr, int v) { MarkdownLinkCallbackDataPtr->linkLength = v; }
int wrap_MarkdownLinkCallbackData_GetLinkLength(MarkdownLinkCallbackData *self) { return self->linkLength; }
void wrap_MarkdownLinkCallbackData_SetUserData(MarkdownLinkCallbackData *MarkdownLinkCallbackDataPtr, void* v) { MarkdownLinkCallbackDataPtr->userData = v; }
void* wrap_MarkdownLinkCallbackData_GetUserData(MarkdownLinkCallbackData *self) { return self->userData; }
void wrap_MarkdownLinkCallbackData_SetIsImage(MarkdownLinkCallbackData *MarkdownLinkCallbackDataPtr, bool v) { MarkdownLinkCallbackDataPtr->isImage = v; }
bool wrap_MarkdownLinkCallbackData_GetIsImage(MarkdownLinkCallbackData *self) { return self->isImage; }
void wrap_MarkdownTooltipCallbackData_SetLinkData(MarkdownTooltipCallbackData *MarkdownTooltipCallbackDataPtr, MarkdownLinkCallbackData v) { MarkdownTooltipCallbackDataPtr->linkData = v; }
MarkdownLinkCallbackData wrap_MarkdownTooltipCallbackData_GetLinkData(MarkdownTooltipCallbackData *self) { return self->linkData; }
void wrap_MarkdownTooltipCallbackData_SetLinkIcon(MarkdownTooltipCallbackData *MarkdownTooltipCallbackDataPtr, const char* v) { MarkdownTooltipCallbackDataPtr->linkIcon = v; }
const char* wrap_MarkdownTooltipCallbackData_GetLinkIcon(MarkdownTooltipCallbackData *self) { return self->linkIcon; }
void wrap_TextBlock_SetStart(TextBlock *TextBlockPtr, int v) { TextBlockPtr->start = v; }
int wrap_TextBlock_GetStart(TextBlock *self) { return self->start; }
void wrap_TextBlock_SetStop(TextBlock *TextBlockPtr, int v) { TextBlockPtr->stop = v; }
int wrap_TextBlock_GetStop(TextBlock *self) { return self->stop; }
void wrap_TextRegion_SetIndentX(TextRegion *TextRegionPtr, private:float v) { TextRegionPtr->indentX = v; }
private:float wrap_TextRegion_GetIndentX(TextRegion *self) { return self->indentX; }
