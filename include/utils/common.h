#ifndef COMMON_H
#define COMMON_H

/**
 * @file common.h
 * @brief Common utility functions and constants for cpp_devNotebook
 * 
 * This header provides shared functionality across the project.
 * Add reusable utilities here as the project grows.
 */

#include <iostream>
#include <string>
#include <vector>

namespace utils {

/**
 * @brief Print a message with formatting
 * @param message The message to print
 */
inline void print(const std::string& message) {
    std::cout << message << std::endl;
}

/**
 * @brief Print an error message to stderr
 * @param error The error message
 */
inline void printError(const std::string& error) {
    std::cerr << "Error: " << error << std::endl;
}

/**
 * @brief Common constants
 */
namespace constants {
    constexpr int DEFAULT_SIZE = 100;
    constexpr double PI = 3.14159265359;
    constexpr double E = 2.71828182846;
}

} // namespace utils

#endif // COMMON_H
