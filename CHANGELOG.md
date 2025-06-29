# CHANGELOG

## Recent Changes (2024-2025)

### Features & Enhancements
- **C++17 Compatibility** (#194): Added C++17 compatibility while maintaining C++11 support
- **Platform Support Improvements** (#179): Fixed iOS/tvOS/watchOS platform support
- **Bounding Box Functionality** (#163, #173, #177): 
  - Added comprehensive bounding box functionality with Skia port
  - Added GetViewBox() to retrieve viewBox dimensions
  - Fixed bounding box calculations specifically for Skia port
  - Improved tight bounding boxes for images and glyphs that were being cropped
- **Image Element Parsing** (#183): Added height and width parsing for image elements
- **Gradient Support** (#176): Added support for number or percentage values for offset/opacity values

### Bug Fixes
- **CircleCI Fixes** (#191, #184): Fixed CI/CD pipeline issues for better automated testing
- **XML Parser Fixes** (#165): Added missing <string> include in ExpatXMLParser.cpp
- **Memory Management** (#166): Explicitly defined ~SkiaSVGImageData destructor
- **Build System**: Auto-merge resolved conflicts for smoother integration

### Dependencies
- Updated boost submodule to newer version
- Reverted cpp-base64 update due to compatibility issues

### Documentation
- Updated CircleCI configuration for improved testing workflow
- Updated baseline for image.svg test

## Version 0.9.0 (Previous Release)

SVG Native Viewer is a library that parses and renders SVG Native documents - a strict subset of SVG 1.1 and SVG 2.0 optimized for embedded graphics.