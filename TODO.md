# TODO List for SVG Native Viewer

## High Priority Tasks

### Build System
- [ ] Upgrade minimum CMake version to 3.16
- [ ] Create CMakePresets.json for standard configurations  
- [ ] Add vcpkg or Conan package management support
- [ ] Set up GitHub Actions for all platforms
- [ ] Add ccache integration for faster builds
- [ ] Create Docker containers for Linux builds

### Code Quality
- [ ] Complete C++17 migration across all code
- [ ] Replace boost::variant with std::variant
- [ ] Replace boost::optional with std::optional
- [ ] Convert raw pointers to smart pointers
- [ ] Add clang-tidy configuration and fixes
- [ ] Implement proper RAII patterns throughout

### Testing
- [ ] Increase unit test coverage to >80%
- [ ] Add visual regression testing framework
- [ ] Implement fuzzing tests for parsers
- [ ] Add memory leak detection with sanitizers
- [ ] Create performance benchmark suite
- [ ] Set up code coverage reporting

### Documentation
- [ ] Set up Doxygen for API documentation
- [ ] Write tutorials for each renderer port
- [ ] Create architecture documentation
- [ ] Add troubleshooting guides
- [ ] Write performance tuning guide
- [ ] Update README with modern examples

### API Improvements
- [ ] Add move semantics support
- [ ] Implement builder pattern for SVGDocument
- [ ] Create type-safe color classes
- [ ] Add async rendering support
- [ ] Modernize C wrapper API
- [ ] Create Python bindings with pybind11

### Renderer Enhancements
- [ ] Refactor common renderer code into base class
- [ ] Add renderer capability querying
- [ ] Implement proper error handling
- [ ] Add multi-threaded rendering support
- [ ] Create Metal renderer for macOS
- [ ] Add Vulkan renderer for Linux

### Platform Support
- [ ] Fix remaining iOS/tvOS/watchOS issues
- [ ] Create NuGet package for Windows
- [ ] Add Homebrew formula for macOS
- [ ] Create .deb and .rpm packages for Linux
- [ ] Build WebAssembly version
- [ ] Add ARM64 support for all platforms

### Features
- [ ] Complete preserveAspectRatio implementation
- [ ] Add missing gradient spread methods
- [ ] Implement resource consumption limits
- [ ] Add malformed input detection
- [ ] Create compliance test suite
- [ ] Add path caching for performance

### Developer Experience  
- [ ] Create project templates
- [ ] Add VS Code configuration
- [ ] Create debugging visualizers
- [ ] Add .clang-format file
- [ ] Write contribution guidelines
- [ ] Create example gallery

### Security
- [ ] Implement strict bounds checking
- [ ] Add input validation layer
- [ ] Create security policy
- [ ] Set up dependency scanning
- [ ] Add fuzzing to CI pipeline
- [ ] Document secure coding practices

### Community
- [ ] Create Discord or forum
- [ ] Set up issue templates
- [ ] Define release schedule
- [ ] Create roadmap document
- [ ] Add code of conduct
- [ ] Write plugin development guide

## Medium Priority Tasks

### Performance
- [ ] Optimize gradient algorithms
- [ ] Implement dirty region tracking  
- [ ] Add GPU acceleration support
- [ ] Create memory pooling system
- [ ] Profile and optimize hot paths
- [ ] Add lazy loading for large files

### Tooling
- [ ] Create SVG Native validator
- [ ] Build format converter tool
- [ ] Add VS Code extension
- [ ] Create online playground
- [ ] Build performance profiler
- [ ] Add debugging tools

### Integration
- [ ] Qt framework integration guide
- [ ] GTK integration examples
- [ ] Unity plugin development
- [ ] React Native module
- [ ] Flutter plugin
- [ ] Electron integration

## Low Priority Tasks

### Advanced Features
- [ ] Text rendering support (future spec)
- [ ] Filter effects subset
- [ ] Animation support investigation
- [ ] Custom element plugins
- [ ] Streaming parser mode
- [ ] Progressive rendering

### Ecosystem
- [ ] Create benchmark suite comparing renderers
- [ ] Build automated compatibility tester
- [ ] Develop migration tools from SVG 1.1
- [ ] Create educational resources
- [ ] Build showcase website
- [ ] Develop certification program

## Completed Tasks
- [x] Add C++17 compatibility
- [x] Fix iOS/tvOS/watchOS platform support
- [x] Implement bounding box functionality
- [x] Add image element width/height parsing
- [x] Fix CircleCI configuration
- [x] Update boost submodule
- [x] Create CHANGELOG.md
- [x] Create PLAN.md
- [x] Create TODO.md