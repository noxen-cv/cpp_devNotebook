# C++ Development Notebook

[![Build Status](https://img.shields.io/github/actions/workflow/status/noxen-cv/cpp_devNotebook/ci.yml?branch=main)](https://github.com/noxen-cv/cpp_devNotebook/actions)
[![License: MIT](https://img.shields.io/badge/License-MIT-yellow.svg)](https://opensource.org/licenses/MIT)
[![C++ Standard](https://img.shields.io/badge/C%2B%2B-17-blue.svg)](https://isocpp.org/)
[![Platform](https://img.shields.io/badge/platform-Windows%20%7C%20Linux%20%7C%20macOS-lightgrey.svg)](https://github.com/noxen-cv/cpp_devNotebook)
[![Contributions Welcome](https://img.shields.io/badge/contributions-welcome-brightgreen.svg)](CONTRIBUTING.md)

## 🎯 Overview

A **comprehensive, portfolio-ready C++ repository** showcasing modern C++ development practices, data structures & algorithms, and object-oriented programming principles. This project serves as both an educational resource for learners and a professional portfolio demonstrating software engineering best practices.

### ✨ Key Features

- 📚 **Structured Learning Path**: Content organized by difficulty (beginner → intermediate → advanced)
- 🏗️ **Industry-Standard Architecture**: CMake-based build system following C++ best practices
- 🎓 **Comprehensive Documentation**: Detailed explanations, code comments, and learning guides
- 🔄 **CI/CD Integration**: Automated builds and testing via GitHub Actions
- 🌐 **Cross-Platform**: Builds on Windows, Linux, and macOS
- 🚀 **Portfolio Projects**: Complete mini-applications demonstrating real-world skills

---

## 📂 Repository Structure

```
cpp_devNotebook/
├── src/                          # Source code organized by topic
│   ├── fundamentals/             # Core C++ concepts
│   │   ├── beginner/            # Operators, loops, flow control
│   │   ├── intermediate/        # Arrays, strings, functions
│   │   └── advanced/            # Pointers, references, templates
│   ├── oop/                     # Object-oriented programming
│   │   ├── beginner/            # Classes, constructors
│   │   ├── intermediate/        # Inheritance, polymorphism
│   │   └── advanced/            # Static members, design patterns
│   ├── data-structures/         # DSA implementations
│   │   ├── linear/              # Arrays, stacks, queues
│   │   └── non-linear/          # Trees, graphs, heaps
│   └── projects/                # Complete applications
│       ├── calendar-system/     # Terminal calendar app
│       ├── enrollment-system/   # Student enrollment manager
│       └── web-browser-sim/     # Browser history simulator
├── include/                      # Header files and utilities
├── examples/                     # Standalone example programs
├── docs/                         # Comprehensive documentation
├── tests/                        # Unit tests (planned)
├── archive/                      # Legacy code preservation
└── CMakeLists.txt               # Root build configuration
```

---

## 🚀 Quick Start

### Prerequisites

- **C++ Compiler**: GCC 7+, Clang 5+, or MSVC 2019+
- **CMake**: Version 3.15 or higher
- **Git**: For cloning the repository

### Building the Project

```bash
# Clone the repository
git clone https://github.com/noxen-cv/cpp_devNotebook.git
cd cpp_devNotebook

# Create build directory
mkdir build && cd build

# Configure with CMake
cmake ..

# Build all targets
cmake --build .

# Run a specific program
./bin/projects/calendar_system
```

### Build Options

```bash
# Build with custom options
cmake -DBUILD_EXAMPLES=ON -DBUILD_PROJECTS=ON -DBUILD_TESTS=OFF ..

# Build in Release mode (optimized)
cmake -DCMAKE_BUILD_TYPE=Release ..

# Build in Debug mode (with debug symbols)
cmake -DCMAKE_BUILD_TYPE=Debug ..
```

---

## 📚 Learning Path

Follow the recommended order to maximize learning:

1. **Fundamentals - Beginner** (`src/fundamentals/beginner/`)
   - Start with operators and basic control flow
   - Practice loop constructs and iterations

2. **Fundamentals - Intermediate** (`src/fundamentals/intermediate/`)
   - Master arrays, strings, and functions
   - Explore multidimensional arrays

3. **OOP - Beginner** (`src/oop/beginner/`)
   - Learn classes and object fundamentals
   - Understand constructors and destructors

4. **Fundamentals - Advanced** (`src/fundamentals/advanced/`)
   - Deep dive into pointers and memory management
   - Master references and templates

5. **Data Structures** (`src/data-structures/`)
   - Implement linear structures (arrays, stacks, queues)
   - Explore non-linear structures (trees, graphs)

6. **OOP - Advanced** (`src/oop/advanced/`)
   - Master inheritance and polymorphism
   - Apply design patterns

7. **Complete Projects** (`src/projects/`)
   - Build real-world applications
   - Integrate multiple concepts

📖 **Detailed Guide**: See [docs/LEARNING_PATH.md](docs/LEARNING_PATH.md)

---

## 🎓 Topics Covered

### Fundamentals
- ✅ **Operators**: Arithmetic, logical, bitwise operations
- ✅ **Control Flow**: if/else, switch statements
- ✅ **Loops**: for, while, do-while iterations
- ✅ **Functions**: Parameters, return values, overloading
- ✅ **Arrays**: Single and multidimensional
- ✅ **Strings**: Manipulation, algorithms
- ✅ **Pointers**: Memory management, pointer arithmetic
- ✅ **References**: L-values, R-values, move semantics
- ✅ **Templates**: Generic programming

### Object-Oriented Programming
- ✅ **Classes & Objects**: Encapsulation principles
- ✅ **Constructors**: Default, parameterized, copy
- ✅ **Inheritance**: Single, multiple, hierarchical
- ✅ **Polymorphism**: Function overriding, virtual functions
- ✅ **Static Members**: Class-level data and methods
- ✅ **Design Patterns**: Common OOP patterns

### Data Structures & Algorithms
- ✅ **Arrays**: Traversal, searching, sorting
- ✅ **Stacks**: LIFO operations, applications
- ✅ **Queues**: FIFO operations, circular queues
- ✅ **Trees**: Binary trees, traversals
- ✅ **Algorithm Patterns**: Two pointers, sliding window

### Simple College Projects
- 🗓️ **Calendar System**: Date management and display
- 📚 **Enrollment System**: Student record management
- 🌐 **Web Browser Simulator**: History and navigation stack

---

## 🤝 Contributing

Contributions are welcome! Whether you're fixing bugs, improving documentation, or adding new features:

1. Fork the repository
2. Create your feature branch (`git checkout -b feature/AmazingFeature`)
3. Commit your changes (`git commit -m 'Add some AmazingFeature'`)
4. Push to the branch (`git push origin feature/AmazingFeature`)
5. Open a Pull Request

See [CONTRIBUTING.md](CONTRIBUTING.md) for detailed guidelines.

---

## 📖 Documentation

- **[Architecture Guide](docs/ARCHITECTURE.md)**: Project organization and design decisions
- **[Learning Path](docs/LEARNING_PATH.md)**: Recommended progression through topics
- **[Topic Guides](docs/topics/)**: In-depth explanations of each concept
- **[API Reference](docs/api/)**: Documentation for reusable components
- **[Change Log](docs/ai-implementations/RESTRUCTURE_LOG.md)**: AI-assisted modifications

---

## 🛠️ Development Environment

### Recommended Setup

- **IDE**: Visual Studio Code with C++ extensions
- **Extensions**:
  - C/C++ (Microsoft)
  - CMake Tools
  - C++ TestMate
  - GitHub Copilot (optional)

### VS Code Configuration

Launch configurations and tasks are pre-configured in `.vscode/`:
- Build tasks: `Ctrl+Shift+B`
- Debug configurations: `F5`

---

## 🧪 Testing

Testing infrastructure is planned for future implementation:

```bash
# Enable tests during build
cmake -DBUILD_TESTS=ON ..

# Run all tests
ctest --verbose
```

---

## 📊 Project Statistics

- **Total Files**: 100+ C++ implementations
- **Topics Covered**: 15+ major concepts
- **Difficulty Levels**: Beginner, Intermediate, Advanced
- **Projects**: 3 complete applications
- **Lines of Code**: 5,000+ (and growing)

---

## 📜 License

This project is licensed under the **MIT License** - see the [LICENSE](LICENSE) file for details.

---

## 🌟 Acknowledgments

- **GeeksforGeeks**: Algorithm practice problems and explanations
- **C++ Community**: Best practices and modern C++ guidelines
- **Educational Institutions**: Curriculum guidance and academic rigor

---

## 📬 Contact

**Maintainer**: [noxen-cv](https://github.com/noxen-cv)

- 🐛 **Report Issues**: [GitHub Issues](https://github.com/noxen-cv/cpp_devNotebook/issues)
- 💡 **Feature Requests**: [GitHub Discussions](https://github.com/noxen-cv/cpp_devNotebook/discussions)
- 📧 **Email**: Available on GitHub profile

---

## 🎯 Project Status

🟢 **Active Development** - This repository is continuously maintained and expanded with new content, optimizations, and features.

### Roadmap

- [ ] Complete unit testing framework
- [ ] Add more data structures (graphs, heaps, hash tables)
- [ ] Implement advanced algorithms (dynamic programming, graph algorithms)
- [ ] Create video tutorials for complex topics
- [ ] Add interactive code playground
- [ ] Integrate code quality tools (clang-format, clang-tidy)

---

<div align="center">

**⭐ Star this repository if you find it helpful!**

Made with ❤️ by developers, for developers

</div>
