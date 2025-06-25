```cpp
#ifndef SVG_NATIVE_GDIPLUS_SVG_RENDERER_H_
#define SVG_NATIVE_GDIPLUS_SVG_RENDERER_H_
#include<Windows.h>
#include<gdiplus.h>
#include "svgnative/Config.h"
#include "svgnative/ports/gdiplus/GDIPlusSVGRenderer.h"
#include "base64.h"
namespace SVGNative{Gdiplus::Color ColorToGdiplusColor(const Color&inColor){return Gdiplus::Color(static_cast<BYTE>(inColor[3]*255.0),static_cast<BYTE>(inColor[0]*255.0),static_cast<BYTE>(inColor[1]*255.0),static_cast<BYTE>(inColor[2]*255.0));}GDIPlusSVGPath::GDIPlusSVGPath(){}GDIPlusSVGPath::~GDIPlusSVGPath(){}void GDIPlusSVGPath::Rect(float x,float y,float width,float height){mPath.AddRectangle(Gdiplus::RectF(x,y,width,