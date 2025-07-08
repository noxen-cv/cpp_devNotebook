# C++ Development Notebook - Makefile
# Organizes builds for Data Structures and Algorithms projects
# Author: Generated for cpp_devNotebook
# Date: July 2025

# Compiler settings
CXX = g++
CXXFLAGS = -std=c++17 -Wall -Wextra -g -O2
LDFLAGS = 

# Directories
DSA_DIR = dsa
ARRAY_DIR = dsa/Array
GFG_DIR = gfg-Trials
OPERATORS_DIR = gfg-Trials/Operators
FLOW_CONTROL_DIR = gfg-Trials/Flow\ Control
BIN_DIR = bin

# Create output directory
$(shell mkdir -p $(BIN_DIR) $(BIN_DIR)/dsa $(BIN_DIR)/array $(BIN_DIR)/gfg $(BIN_DIR)/operators $(BIN_DIR)/flow-control)

# Color codes for output
RED = \033[0;31m
GREEN = \033[0;32m
YELLOW = \033[0;33m
BLUE = \033[0;34m
NC = \033[0m # No Color

# Main targets
.PHONY: all clean help test dsa gfg array operators flow-control info

all: info dsa gfg
	@echo "$(GREEN)✓ All projects built successfully!$(NC)"

# Information target
info:
	@echo "$(BLUE)╔══════════════════════════════════════════════════════════════╗$(NC)"
	@echo "$(BLUE)║              C++ Development Notebook - Build System         ║$(NC)"
	@echo "$(BLUE)╠══════════════════════════════════════════════════════════════╣$(NC)"
	@echo "$(BLUE)║ Building Data Structures and Algorithms implementations      ║$(NC)"
	@echo "$(BLUE)║ Compiler: $(CXX) $(CXXFLAGS)                    ║$(NC)"
	@echo "$(BLUE)╚══════════════════════════════════════════════════════════════╝$(NC)"
	@echo ""

# DSA projects
dsa: array dsa-core
	@echo "$(GREEN)✓ DSA projects completed$(NC)"

dsa-core: $(BIN_DIR)/dsa/inventory_system $(BIN_DIR)/dsa/web_browser

array: $(BIN_DIR)/array/calendar $(BIN_DIR)/array/stack_demo $(BIN_DIR)/array/enrollment
	@echo "$(GREEN)✓ Array projects completed$(NC)"

# GFG projects
gfg: operators flow-control
	@echo "$(GREEN)✓ GeeksforGeeks projects completed$(NC)"

operators: $(BIN_DIR)/operators/arithmetic_prog $(BIN_DIR)/operators/day_calc $(BIN_DIR)/operators/for_loops $(BIN_DIR)/operators/formula_eval $(BIN_DIR)/operators/geometric_prog $(BIN_DIR)/operators/modulo_op
	@echo "$(GREEN)✓ Operators projects completed$(NC)"

flow-control: $(BIN_DIR)/flow-control/fizzbuzz
	@echo "$(GREEN)✓ Flow Control projects completed$(NC)"

# DSA Core builds
$(BIN_DIR)/dsa/inventory_system: $(DSA_DIR)/Valenzuela_class_stack_activity.cpp
	@echo "$(YELLOW)Building inventory system...$(NC)"
	$(CXX) $(CXXFLAGS) -o $@ $< $(LDFLAGS)

$(BIN_DIR)/dsa/web_browser: $(DSA_DIR)/webbrowser.cpp
	@echo "$(YELLOW)Building web browser...$(NC)"
	$(CXX) $(CXXFLAGS) -o $@ $< $(LDFLAGS)

# Array builds
$(BIN_DIR)/array/calendar: $(ARRAY_DIR)/1_terminalCalendar.cpp
	@echo "$(YELLOW)Building terminal calendar...$(NC)"
	$(CXX) $(CXXFLAGS) -o $@ $< $(LDFLAGS)

$(BIN_DIR)/array/stack_demo: $(ARRAY_DIR)/2_stackDemonstration.cpp
	@echo "$(YELLOW)Building stack demonstration...$(NC)"
	$(CXX) $(CXXFLAGS) -o $@ $< $(LDFLAGS)

$(BIN_DIR)/array/enrollment: $(ARRAY_DIR)/3_EnrollmentSystem.cpp
	@echo "$(YELLOW)Building enrollment system...$(NC)"
	$(CXX) $(CXXFLAGS) -o $@ $< $(LDFLAGS)

# Operators builds
$(BIN_DIR)/operators/arithmetic_prog: $(OPERATORS_DIR)/Arithmetric\ Progression.cpp
	@echo "$(YELLOW)Building arithmetic progression...$(NC)"
	$(CXX) $(CXXFLAGS) -o $@ "$<" $(LDFLAGS)

$(BIN_DIR)/operators/day_calc: $(OPERATORS_DIR)/Day\ before\ N\ days.cpp
	@echo "$(YELLOW)Building day calculator...$(NC)"
	$(CXX) $(CXXFLAGS) -o $@ "$<" $(LDFLAGS)

$(BIN_DIR)/operators/for_loops: $(OPERATORS_DIR)/For\ Loops.cpp
	@echo "$(YELLOW)Building for loops demo...$(NC)"
	$(CXX) $(CXXFLAGS) -o $@ "$<" $(LDFLAGS)

$(BIN_DIR)/operators/formula_eval: $(OPERATORS_DIR)/Formula\ Evaluation.cpp
	@echo "$(YELLOW)Building formula evaluation...$(NC)"
	$(CXX) $(CXXFLAGS) -o $@ "$<" $(LDFLAGS)

$(BIN_DIR)/operators/geometric_prog: $(OPERATORS_DIR)/Geometric\ Progressions.cpp
	@echo "$(YELLOW)Building geometric progression...$(NC)"
	$(CXX) $(CXXFLAGS) -o $@ "$<" $(LDFLAGS)

$(BIN_DIR)/operators/modulo_op: $(OPERATORS_DIR)/Modulo\ Operator.cpp
	@echo "$(YELLOW)Building modulo operator demo...$(NC)"
	$(CXX) $(CXXFLAGS) -o $@ "$<" $(LDFLAGS)

# Flow Control builds
$(BIN_DIR)/flow-control/fizzbuzz: $(FLOW_CONTROL_DIR)/FizzbuzzProgram.cpp
	@echo "$(YELLOW)Building FizzBuzz program...$(NC)"
	$(CXX) $(CXXFLAGS) -o $@ "$<" $(LDFLAGS)

# Test target
test: all
	@echo "$(BLUE)Running basic functionality tests...$(NC)"
	@echo "$(GREEN)Testing executable creation:$(NC)"
	@ls -la $(BIN_DIR)/dsa/ | grep -E "(inventory_system|web_browser)" || echo "$(RED)❌ DSA core builds missing$(NC)"
	@ls -la $(BIN_DIR)/array/ | grep -E "(calendar|stack_demo|enrollment)" || echo "$(RED)❌ Array builds missing$(NC)"
	@ls -la $(BIN_DIR)/operators/ | grep -E "(arithmetic_prog|geometric_prog)" || echo "$(RED)❌ Operators builds missing$(NC)"
	@ls -la $(BIN_DIR)/flow-control/ | grep "fizzbuzz" || echo "$(RED)❌ Flow control builds missing$(NC)"
	@echo "$(GREEN)✓ All builds verified successfully!$(NC)"
	@echo ""
	@echo "$(BLUE)To run programs:$(NC)"
	@echo "  DSA: ./$(BIN_DIR)/dsa/inventory_system"
	@echo "  Array: ./$(BIN_DIR)/array/calendar"
	@echo "  Operators: ./$(BIN_DIR)/operators/fizzbuzz"

# Clean target
clean:
	@echo "$(RED)Cleaning build artifacts...$(NC)"
	rm -rf $(BIN_DIR)
	rm -f $(DSA_DIR)/*.exe $(DSA_DIR)/a.exe
	rm -f $(ARRAY_DIR)/*.exe $(ARRAY_DIR)/a.exe
	rm -f $(OPERATORS_DIR)/*.exe
	rm -f $(FLOW_CONTROL_DIR)/*.exe
	@echo "$(GREEN)✓ Clean completed$(NC)"

# Help target
help:
	@echo "$(BLUE)C++ Development Notebook - Makefile Help$(NC)"
	@echo ""
	@echo "$(YELLOW)Available targets:$(NC)"
	@echo "  $(GREEN)all$(NC)              - Build all projects (default)"
	@echo "  $(GREEN)dsa$(NC)              - Build Data Structures and Algorithms projects"
	@echo "  $(GREEN)array$(NC)            - Build Array-related projects"
	@echo "  $(GREEN)gfg$(NC)              - Build GeeksforGeeks trial projects"
	@echo "  $(GREEN)operators$(NC)        - Build operator demonstration projects"
	@echo "  $(GREEN)flow-control$(NC)     - Build flow control projects"
	@echo "  $(GREEN)test$(NC)             - Build all and run basic tests"
	@echo "  $(GREEN)clean$(NC)            - Remove all build artifacts"
	@echo "  $(GREEN)help$(NC)             - Show this help message"
	@echo ""
	@echo "$(YELLOW)Examples:$(NC)"
	@echo "  make                  # Build everything"
	@echo "  make dsa              # Build only DSA projects"
	@echo "  make test             # Build and test"
	@echo "  make clean            # Clean all builds"
	@echo ""
	@echo "$(YELLOW)Compiler flags:$(NC) $(CXXFLAGS)"
	@echo "$(YELLOW)Output directory:$(NC) $(BIN_DIR)/"

# Development shortcuts
debug: CXXFLAGS += -DDEBUG -g3
debug: all

release: CXXFLAGS += -O3 -DNDEBUG
release: clean all

# Individual project shortcuts for development
calendar: $(BIN_DIR)/array/calendar
fizzbuzz: $(BIN_DIR)/flow-control/fizzbuzz
inventory: $(BIN_DIR)/dsa/inventory_system
browser: $(BIN_DIR)/dsa/web_browser

# Show project structure
structure:
	@echo "$(BLUE)Project Structure:$(NC)"
	@echo "$(BIN_DIR)/"
	@echo "├── dsa/"
	@echo "│   ├── inventory_system"
	@echo "│   └── web_browser"
	@echo "├── array/"
	@echo "│   ├── calendar"
	@echo "│   ├── stack_demo"
	@echo "│   └── enrollment"
	@echo "├── operators/"
	@echo "│   ├── arithmetic_prog"
	@echo "│   ├── geometric_prog"
	@echo "│   └── [other operator demos]"
	@echo "└── flow-control/"
	@echo "    └── fizzbuzz"

# Default target
.DEFAULT_GOAL := all
