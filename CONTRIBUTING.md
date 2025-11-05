# Contributing to cpp_devNotebook

Thank you for your interest in contributing to the C++ Development Notebook! 🎉

We welcome contributions from developers of all skill levels. Whether you're fixing typos, adding new learning materials, improving documentation, or implementing new features, your contributions help make this resource better for everyone.

---

## 📋 Table of Contents

1. [Code of Conduct](#code-of-conduct)
2. [Getting Started](#getting-started)
3. [How to Contribute](#how-to-contribute)
4. [Contribution Types](#contribution-types)
5. [Development Workflow](#development-workflow)
6. [Coding Standards](#coding-standards)
7. [Documentation Guidelines](#documentation-guidelines)
8. [Review Process](#review-process)
9. [Community](#community)

---

## 📜 Code of Conduct

This project adheres to the [Contributor Covenant Code of Conduct](CODE_OF_CONDUCT.md). By participating, you are expected to uphold this code. Please report unacceptable behavior to the project maintainers.

---

## 🚀 Getting Started

### Prerequisites

Before contributing, ensure you have:

- **Git** installed and configured
- **C++ compiler** (GCC 7+, Clang 5+, or MSVC 2019+)
- **CMake** 3.15 or higher
- **GitHub account** for pull requests

### Fork and Clone

1. **Fork the repository** on GitHub
2. **Clone your fork locally**:
   ```bash
   git clone https://github.com/YOUR-USERNAME/cpp_devNotebook.git
   cd cpp_devNotebook
   ```
3. **Add upstream remote**:
   ```bash
   git remote add upstream https://github.com/noxen-cv/cpp_devNotebook.git
   ```

### Build the Project

```bash
mkdir build && cd build
cmake ..
cmake --build .
```

Verify everything builds successfully before making changes.

---

## 🤝 How to Contribute

### Quick Contribution Workflow

1. **Sync with upstream**:
   ```bash
   git checkout main
   git fetch upstream
   git merge upstream/main
   ```

2. **Create a feature branch**:
   ```bash
   git checkout -b feature/your-feature-name
   ```
   
   Use descriptive branch names:
   - `feature/add-linked-list-implementation`
   - `fix/memory-leak-in-stack`
   - `docs/improve-oop-guide`
   - `refactor/simplify-cmake-structure`

3. **Make your changes** (see [Coding Standards](#coding-standards))

4. **Test your changes**:
   ```bash
   cd build
   cmake --build .
   # Run relevant executables to verify
   ```

5. **Commit with clear messages**:
   ```bash
   git add .
   git commit -m "Add: Linked list implementation with tests"
   ```
   
   Use conventional commit prefixes:
   - `Add:` for new features
   - `Fix:` for bug fixes
   - `Docs:` for documentation
   - `Refactor:` for code improvements
   - `Test:` for adding tests
   - `Style:` for formatting changes

6. **Push to your fork**:
   ```bash
   git push origin feature/your-feature-name
   ```

7. **Open a Pull Request** on GitHub with:
   - Clear title describing the change
   - Detailed description of what and why
   - Reference to any related issues

---

## 📝 Contribution Types

### 1. **Code Contributions**

#### Adding New Implementations
- Place code in appropriate directory by topic and difficulty
- Follow existing file naming conventions (kebab-case)
- Include comprehensive comments
- Add entry to relevant CMakeLists.txt

**Example**: Adding a new sorting algorithm
```
src/fundamentals/intermediate/arrays/bubble-sort.cpp
```

#### Fixing Bugs
- Clearly describe the bug in commit message
- Add comments explaining the fix
- Consider adding test case to prevent regression

#### Improving Existing Code
- Maintain backward compatibility
- Document why changes improve the code
- Update related documentation

### 2. **Documentation Contributions**

#### Topic Documentation
Add or improve guides in `docs/topics/`:
- Clear explanations of concepts
- Code examples with annotations
- Common pitfalls and best practices
- Links to external resources

#### README Updates
- Fix typos and grammar
- Improve clarity
- Update statistics and badges

#### Code Comments
- Explain complex logic
- Document time/space complexity
- Provide usage examples

### 3. **Testing Contributions**

(Future implementation)
- Write unit tests for data structures
- Create test cases for algorithms
- Add benchmark tests

### 4. **Infrastructure Improvements**

- Enhance CI/CD pipeline
- Improve CMake configuration
- Add developer tools
- Optimize build process

---

## 🛠️ Development Workflow

### Directory Structure Guidelines

When adding new content:

1. **Determine appropriate category**:
   - `src/fundamentals/` - Core language features
   - `src/oop/` - Object-oriented concepts
   - `src/data-structures/` - DSA implementations
   - `src/projects/` - Complete applications

2. **Choose difficulty level**:
   - `beginner/` - Entry-level concepts
   - `intermediate/` - Mid-level topics
   - `advanced/` - Complex implementations

3. **Create subdirectories** if needed for topic organization

4. **Update CMakeLists.txt** in the appropriate directory

### Adding a New Topic Category

If creating entirely new category:

1. Create directory structure in `src/`
2. Add `CMakeLists.txt` with build rules
3. Update root `CMakeLists.txt`
4. Add documentation in `docs/topics/`
5. Update `docs/LEARNING_PATH.md`
6. Update main README.md

---

## 📐 Coding Standards

### C++ Style Guidelines

#### General Principles
- **C++17 standard**: Use modern C++ features
- **Const correctness**: Use `const` wherever applicable
- **RAII**: Manage resources properly
- **Avoid raw pointers**: Prefer smart pointers when needed

#### Naming Conventions
```cpp
// Variables: camelCase
int studentCount;
string userName;

// Constants: UPPER_SNAKE_CASE
const int MAX_SIZE = 100;
constexpr double PI = 3.14159;

// Functions: camelCase
void calculateTotal();
int findMaxValue();

// Classes: PascalCase
class StudentRecord;
class BinarySearchTree;

// Files: kebab-case
// bubble-sort.cpp
// student-manager.cpp
```

#### Code Formatting
```cpp
// Indentation: 4 spaces (no tabs)
if (condition) {
    // code here
}

// Braces: K&R style
void function() {
    // opening brace on same line
}

// Spacing around operators
int result = a + b * c;

// One statement per line
int x = 5;
int y = 10;
```

#### Comments
```cpp
// Single-line comments for brief explanations
int size = 10;  // Array size

/**
 * Multi-line comments for functions
 * @param n The input number
 * @return The factorial of n
 * Time Complexity: O(n)
 * Space Complexity: O(1)
 */
int factorial(int n) {
    // Implementation
}
```

#### Include Guards
```cpp
#ifndef HEADER_NAME_H
#define HEADER_NAME_H

// Header content

#endif  // HEADER_NAME_H
```

#### Error Handling
```cpp
// Use exceptions for exceptional cases
if (index < 0 || index >= size) {
    throw std::out_of_range("Index out of bounds");
}

// Validate input
if (ptr == nullptr) {
    std::cerr << "Error: Null pointer" << std::endl;
    return;
}
```

### CMake Guidelines

```cmake
# Use lowercase for commands
add_executable(target_name source.cpp)

# Clear variable names
set(SOURCE_FILES file1.cpp file2.cpp)

# Comments explaining non-obvious logic
# This helper function creates executables for all .cpp files
```

---

## 📚 Documentation Guidelines

### Code Documentation

Every non-trivial function should have:

```cpp
/**
 * @brief Brief one-line description
 * 
 * Detailed description of what the function does,
 * including any important implementation details.
 * 
 * @param param1 Description of first parameter
 * @param param2 Description of second parameter
 * @return Description of return value
 * 
 * @note Any important notes or warnings
 * @example
 * Example usage:
 * int result = myFunction(10, 20);
 * 
 * Time Complexity: O(n)
 * Space Complexity: O(1)
 */
```

### Markdown Documentation

- Use clear headings (`##`, `###`)
- Include code examples in fenced blocks
- Add links to related resources
- Use emojis sparingly for visual navigation
- Keep lines under 120 characters when possible

### README Updates

When updating README:
- Maintain existing structure and tone
- Keep statistics accurate
- Update table of contents if adding sections
- Verify all links work

---

## 🔍 Review Process

### What Reviewers Look For

- **Functionality**: Does it work as intended?
- **Code Quality**: Is it readable and maintainable?
- **Style**: Does it follow project conventions?
- **Documentation**: Is it well-documented?
- **Tests**: Are there appropriate tests? (when applicable)
- **No Breaking Changes**: Does it maintain compatibility?

### Review Timeline

- Initial review: Within 3-5 days
- Follow-up reviews: Within 2 days
- Merge: After approval from maintainer

### Addressing Review Comments

1. Read all feedback carefully
2. Ask questions if anything is unclear
3. Make requested changes in new commits
4. Respond to each comment
5. Request re-review when ready

---

## 🎯 Good First Issues

New to contributing? Look for issues labeled:
- `good first issue` - Simple, well-defined tasks
- `documentation` - Documentation improvements
- `help wanted` - Community input needed

---

## 💬 Community

### Getting Help

- **GitHub Discussions**: Ask questions, share ideas
- **Issues**: Report bugs, request features
- **Pull Requests**: Review others' contributions

### Staying Updated

- **Watch** the repository for notifications
- **Star** to show support
- **Follow** maintainers on GitHub

---

## 🙏 Recognition

All contributors will be:
- Listed in project contributors
- Credited in relevant documentation
- Mentioned in release notes

Significant contributors may be invited as collaborators.

---

## 📖 Additional Resources

- **[Architecture Guide](docs/ARCHITECTURE.md)**: Understand project structure
- **[Learning Path](docs/LEARNING_PATH.md)**: Content organization logic
- **[Topic Guides](docs/topics/)**: Subject-specific documentation

---

## ❓ Questions?

If you have questions not covered here:
1. Check existing [GitHub Issues](https://github.com/noxen-cv/cpp_devNotebook/issues)
2. Search [GitHub Discussions](https://github.com/noxen-cv/cpp_devNotebook/discussions)
3. Open a new discussion if needed

---

<div align="center">

**Thank you for contributing to cpp_devNotebook! 🚀**

Every contribution, no matter how small, helps make this resource better for the C++ community.

</div>


