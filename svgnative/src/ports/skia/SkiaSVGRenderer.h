```cpp
#ifndef SVG_NATIVE_SVGNATIVE_PORTS_SKIA_SKIASVGRENDERER_H_
#define SVG_NATIVE_SVGNATIVE_PORTS_SKIA_SKIASVGRENDERER_H_
#include "svgnative/ports/skia/SkiaSVGRenderer.h"
#include "base64.h"
#include "svgnative/Config.h"
#include "SkCanvas.h"
#include "SkCodec.h"
#include "SkData.h"
#include "SkEncodedOrigin.h"
#include "SkGradientShader.h"
#include "SkImage.h"
#include "SkPoint.h"
#include "SkRect.h"
#include "SkRRect.h"
#include "SkShader.h"
#include "SkSurface.h"
#include "SkDashPathEffect.h"
#include "SkTypes.h"
#include "SkSamplingOptions.h"
#include<math.h>
namespace SVGNative{class SkiaSVGPath{public:SkiaSVGPath();void Rect(float x,float y,float width,float height);void RoundedRect(float x,float y,float width,float height,float rx,float ry);void Ellipse(float cx,float cy,float rx,float ry);void MoveTo(float x,float y);void LineTo(float x,float y);void CurveTo(float x1,float y1,float x2,float y2,float x3,float y3);void CurveToV(float x2,float y2,float x3,float y3);void ClosePath();SkPath mPath;float mCurrentX;float mCurrentY;};class SkiaSVGTransform{public:SkiaSVGTransform(float a,float b,float c,float d,float tx,float ty);void Set(float a,float b,float c,float d,float tx,float ty);void Rotate(float degree);void Translate(float tx,float ty);void Scale(float sx,float sy);void Concat(float a,float b,float c,float d,float tx,float ty);SkMatrix mMatrix;};inline sk_sp<SkImage>getOrientedImage(sk_sp<SkImage>srcImg,SkEncodedOrigin origin){int width=0,height=0;int offsetX=0,offsetY=0;int rot=0;int centerX=0,centerY=0;switch(origin){case SkEncodedOrigin::kBottomRight_S