#ifndef HEADER_FILE_H
#define HEADER_FILE_H
#include "svgnative/SVGDocument.h"
#include "SkData.h"
#include "SkEncodedImageFormat.h"
#include "SkImage.h"
#include "SkStream.h"
#include "SkSurface.h"
#include "svgnative/ports/skia/SkiaSVGRenderer.h"
#include<fstream>
#include<iostream>
#include<string>
int main(int argc,char*const argv[]){if(argc!=3){std::cout<<"Incorrect number of arguments."<<std::endl;return 0;}std::string svgInput{};std::ifstream input(argv[1]);if(!input){std::cout<<"Error!Could not open input file."<<std::endl;exit(EXIT_FAILURE);}for(std::string line;std::getline(input,line);)svgInput.append(line);input.close();auto renderer=std::make_shared<SVGNative::SkiaSVGRenderer>();auto doc=std::unique_ptr<SVGNative::SVGDocument>(SVGNative::SVGDocument::CreateSVGDocument(svgInput.c_str(),renderer));{auto skRasterSurface=SkSurface::MakeRasterN32Premul(doc->Width(),doc->Height());auto skRasterCanvas=skRasterSurface->getCanvas();renderer->SetSkCanvas(skRasterCanvas);SVGNative::Rect bounds{0,0,0,0};doc->GetBoundingBox(bounds);}auto skRasterSurface=SkSurface::MakeRasterN32Premul(doc->Width(),doc->Height());auto skRasterCanvas=skRasterSurface->getCanvas();renderer->SetSkCanvas(skRasterCanvas);doc->Render();auto skImage=skRasterSurface->makeImageSnapshot();if(!skImage)return 0;sk_sp<SkData>pngData(skImage->encodeToData(SkEncodedImageFormat::kPNG,100));if(!pngData)return 0;SkFILEWStream out(argv[2]);(void)out.write(pngData->data(),pngData->size());return 0;}
#endif
