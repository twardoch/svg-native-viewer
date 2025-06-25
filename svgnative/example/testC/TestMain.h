#ifndef SVG_NATIVE_HEADER_H
#define SVG_NATIVE_HEADER_H
#include<stdlib.h>
#include<stdio.h>
#include<stddef.h>
#include "svgnative/SVGNativeCWrapper.h"
char*read_svg_input(const char*pathname);size_t write_data(const char*pathname,const char*buff_output,size_t size_output);
#endif
