```cpp
#ifndef CAIRO_SVG_RENDERER_H
#define CAIRO_SVG_RENDERER_H
#include "svgnative/ports/cairo/CairoSVGRenderer.h"
#include "base64.h"
#include "svgnative/Config.h"
#include "cairo.h"
#include<math.h>
#include "CairoImageInfo.h"
namespace SVGNative{class CairoSVGPath{public:CairoSVGPath(){
#if CAIRO_HAS_IMAGE_SURFACE
cairo_surface_t*sf=cairo_image_surface_create(CAIRO_FORMAT_ARGB32,1,1);
#elif CAIRO_HAS_RECORDING_SURFACE
cairo_surface_t*sf=cairo_recording_surface_create(CAIRO_CONTENT_COLOR_ALPHA,NULL);
#endif
mPathCtx=cairo_create(sf);}~CairoSVGPath(){cairo_surface_t*sf=cairo_get_target(mPathCtx);cairo_destroy(mPathCtx);cairo_surface_finish(sf);cairo_surface_destroy(sf);}void Rect(float x,float y,float width,float height){cairo_rectangle(mPathCtx,x,y,width,height);cairo_close_path(mPathCtx);}inline double deg2rad(double deg){return(deg*M_PI/180.0);}inline void cairo_arc_rx_ry(cairo_t*cr,float cx,float cy,float rx,float ry,float rad1,float rad2){if(rx==ry){cairo_arc(cr,cx,cy,rx,rad1,rad2);}else{cairo_save(cr);cairo_translate(cr,cx,cy);cairo_scale(cr,rx,ry);cairo_arc(cr,0,0,1,rad1,rad2);cairo_restore(cr);}}void RoundedRect(float x,float y,float width,float height,float rx,float ry){cairo_new_sub_path(mPathCtx);cairo_arc