#!/bin/zsh

###############################################################################
# cpp_devNotebook Migration Script
# 
# Purpose: Migrate files from old structure to new industry-standard structure
# Date: November 5, 2025
# 
# IMPORTANT: This script will:
# 1. Archive the old structure in archive/old-structure/
# 2. Move files to their new categorized locations
# 3. Preserve git history
# 4. Create backup before migration
#
# Usage: 
#   chmod +x migrate.sh
#   ./migrate.sh
#
###############################################################################

# Color codes for output
RED='\033[0;31m'
GREEN='\033[0;32m'
YELLOW='\033[1;33m'
BLUE='\033[0;34m'
NC='\033[0m' # No Color

# Script configuration
SCRIPT_DIR="$(cd "$(dirname "$0")" && pwd)"
BACKUP_DIR="$SCRIPT_DIR/backup_$(date +%Y%m%d_%H%M%S)"
ARCHIVE_DIR="$SCRIPT_DIR/archive/old-structure"

# Counter for statistics
moved_files=0
moved_dirs=0
errors=0

###############################################################################
# Helper Functions
###############################################################################

print_header() {
    echo "${BLUE}"
    echo "=========================================="
    echo "$1"
    echo "=========================================="
    echo "${NC}"
}

print_success() {
    echo "${GREEN}✅ $1${NC}"
}

print_warning() {
    echo "${YELLOW}⚠️  $1${NC}"
}

print_error() {
    echo "${RED}❌ $1${NC}"
    ((errors++))
}

print_info() {
    echo "${BLUE}ℹ️  $1${NC}"
}

# Move file with git tracking
move_file() {
    local src="$1"
    local dest="$2"
    
    if [[ -f "$src" ]]; then
        # Create destination directory if it doesn't exist
        mkdir -p "$(dirname "$dest")"
        
        # Use git mv to preserve history
        git mv "$src" "$dest" 2>/dev/null || mv "$src" "$dest"
        
        if [[ $? -eq 0 ]]; then
            ((moved_files++))
            print_success "Moved: $(basename "$src") → $dest"
        else
            print_error "Failed to move: $src"
        fi
    else
        print_warning "File not found: $src"
    fi
}

# Move directory with git tracking
move_dir() {
    local src="$1"
    local dest="$2"
    
    if [[ -d "$src" ]]; then
        mkdir -p "$(dirname "$dest")"
        
        # Move entire directory
        git mv "$src" "$dest" 2>/dev/null || mv "$src" "$dest"
        
        if [[ $? -eq 0 ]]; then
            ((moved_dirs++))
            print_success "Moved directory: $src → $dest"
        else
            print_error "Failed to move directory: $src"
        fi
    else
        print_warning "Directory not found: $src"
    fi
}

###############################################################################
# Pre-Migration Checks
###############################################################################

print_header "Pre-Migration Checks"

# Check if we're in the right directory
if [[ ! -f "CMakeLists.txt" ]] || [[ ! -d "gfg-Trials" ]]; then
    print_error "Error: Please run this script from the cpp_devNotebook root directory"
    exit 1
fi

print_success "Current directory verified"

# Check for uncommitted changes
if ! git diff-index --quiet HEAD -- 2>/dev/null; then
    print_warning "You have uncommitted changes"
    read "response?Continue anyway? (y/n): "
    if [[ ! "$response" =~ ^[Yy]$ ]]; then
        print_info "Migration cancelled"
        exit 0
    fi
fi

# Create backup
print_info "Creating backup at: $BACKUP_DIR"
mkdir -p "$BACKUP_DIR"
cp -r gfg-Trials "$BACKUP_DIR/" 2>/dev/null
cp -r dsa "$BACKUP_DIR/" 2>/dev/null
cp -r docs "$BACKUP_DIR/" 2>/dev/null
print_success "Backup created"

###############################################################################
# Archive Old Structure
###############################################################################

print_header "Archiving Old Structure"

# Archive old folders (create copies, not moves yet)
mkdir -p "$ARCHIVE_DIR"
if [[ -d "gfg-Trials" ]]; then
    cp -r gfg-Trials "$ARCHIVE_DIR/" 2>/dev/null
    print_success "Archived: gfg-Trials"
fi
if [[ -d "dsa" ]]; then
    cp -r dsa "$ARCHIVE_DIR/" 2>/dev/null
    print_success "Archived: dsa"
fi

###############################################################################
# Migrate Files
###############################################################################

print_header "Starting File Migration"

# ==========================================
# FUNDAMENTALS - BEGINNER - OPERATORS
# ==========================================
print_info "Migrating: Operators..."
move_file "gfg-Trials/Operators/Arithmetric Progression.cpp" "src/fundamentals/beginner/operators/arithmetic-progression.cpp"
move_file "gfg-Trials/Operators/Day before N days.cpp" "src/fundamentals/beginner/operators/day-before-n-days.cpp"
move_file "gfg-Trials/Operators/For Loops.cpp" "src/fundamentals/beginner/operators/for-loops.cpp"
move_file "gfg-Trials/Operators/Formula Evaluation.cpp" "src/fundamentals/beginner/operators/formula-evaluation.cpp"
move_file "gfg-Trials/Operators/Geometric Progressions.cpp" "src/fundamentals/beginner/operators/geometric-progressions.cpp"
move_file "gfg-Trials/Operators/Modulo Operator.cpp" "src/fundamentals/beginner/operators/modulo-operator.cpp"

# ==========================================
# FUNDAMENTALS - BEGINNER - FLOW CONTROL
# ==========================================
print_info "Migrating: Flow Control..."
move_file "gfg-Trials/Flow Control/FizzbuzzProgram.cpp" "src/fundamentals/beginner/flow-control/fizzbuzz-program.cpp"

# ==========================================
# FUNDAMENTALS - BEGINNER - LOOPS
# ==========================================
print_info "Migrating: Loops..."
move_file "gfg-Trials/Loops/decimal to binary.cpp" "src/fundamentals/beginner/loops/decimal-to-binary.cpp"
move_file "gfg-Trials/Loops/Digital Root.cpp" "src/fundamentals/beginner/loops/digital-root.cpp"
move_file "gfg-Trials/Loops/Divisibility.cpp" "src/fundamentals/beginner/loops/divisibility.cpp"
move_file "gfg-Trials/Loops/Have Fun with XOR.cpp" "src/fundamentals/beginner/loops/have-fun-with-xor.cpp"
move_file "gfg-Trials/Loops/Indices.cpp" "src/fundamentals/beginner/loops/indices.cpp"
move_file "gfg-Trials/Loops/math.cpp" "src/fundamentals/beginner/loops/math.cpp"
move_file "gfg-Trials/Loops/math v2.cpp" "src/fundamentals/beginner/loops/math-v2.cpp"
move_file "gfg-Trials/Loops/SquarePattern.cpp" "src/fundamentals/beginner/loops/square-pattern.cpp"
move_file "gfg-Trials/Loops/TrianglePattern.cpp" "src/fundamentals/beginner/loops/triangle-pattern.cpp"

# ==========================================
# FUNDAMENTALS - INTERMEDIATE - FUNCTIONS
# ==========================================
print_info "Migrating: Functions..."
move_file "gfg-Trials/Functions/factorials.cpp" "src/fundamentals/intermediate/functions/factorials.cpp"
move_file "gfg-Trials/Functions/Finding Digits.cpp" "src/fundamentals/intermediate/functions/finding-digits.cpp"
move_file "gfg-Trials/Functions/functions.cpp" "src/fundamentals/intermediate/functions/functions.cpp"
move_file "gfg-Trials/Functions/primeFactorization.cpp" "src/fundamentals/intermediate/functions/prime-factorization.cpp"
move_file "gfg-Trials/Functions/Volume.cpp" "src/fundamentals/intermediate/functions/volume.cpp"

# ==========================================
# FUNDAMENTALS - INTERMEDIATE - ARRAYS
# ==========================================
print_info "Migrating: Arrays..."
move_file "gfg-Trials/Arrays/Array Traversals.cpp" "src/fundamentals/intermediate/arrays/array-traversals.cpp"
move_file "gfg-Trials/Arrays/arrayElemetsModify.cpp" "src/fundamentals/intermediate/arrays/array-elements-modify.cpp"
move_file "gfg-Trials/Arrays/ArrayExercise.cpp" "src/fundamentals/intermediate/arrays/array-exercise.cpp"

# ==========================================
# FUNDAMENTALS - INTERMEDIATE - STRINGS
# ==========================================
print_info "Migrating: Strings..."
if [[ -d "gfg-Trials/Strings" ]]; then
    for file in gfg-Trials/Strings/*.cpp; do
        if [[ -f "$file" ]]; then
            filename=$(basename "$file")
            # Convert to kebab-case
            kebab_name=$(echo "$filename" | sed 's/\([A-Z]\)/-\1/g' | tr '[:upper:]' '[:lower:]' | sed 's/^-//')
            move_file "$file" "src/fundamentals/intermediate/strings/$kebab_name"
        fi
    done
fi

# ==========================================
# FUNDAMENTALS - INTERMEDIATE - MULTIDIMENSIONAL ARRAYS
# ==========================================
print_info "Migrating: Multidimensional Arrays..."
move_file "gfg-Trials/multi dimensional array/Creating 2D Arrays Dynamically.cpp" "src/fundamentals/intermediate/multidimensional-arrays/creating-2d-arrays-dynamically.cpp"
move_file "gfg-Trials/multi dimensional array/diagonal sum.cpp" "src/fundamentals/intermediate/multidimensional-arrays/diagonal-sum.cpp"
move_file "gfg-Trials/multi dimensional array/middle swapp.cpp" "src/fundamentals/intermediate/multidimensional-arrays/middle-swap.cpp"
move_file "gfg-Trials/multi dimensional array/multiplication of matrices.cpp" "src/fundamentals/intermediate/multidimensional-arrays/multiplication-of-matrices.cpp"
move_file "gfg-Trials/multi dimensional array/Passing 2D arrays as arguments.cpp" "src/fundamentals/intermediate/multidimensional-arrays/passing-2d-arrays-as-arguments.cpp"
move_file "gfg-Trials/multi dimensional array/transpose of a matrix v2.cpp" "src/fundamentals/intermediate/multidimensional-arrays/transpose-of-a-matrix-v2.cpp"
move_file "gfg-Trials/multi dimensional array/transposition of matrix.cpp" "src/fundamentals/intermediate/multidimensional-arrays/transposition-of-matrix.cpp"
move_file "gfg-Trials/multi dimensional array/variable size 2d array.cpp" "src/fundamentals/intermediate/multidimensional-arrays/variable-size-2d-array.cpp"

# ==========================================
# FUNDAMENTALS - INTERMEDIATE - STRUCTS & UNIONS
# ==========================================
print_info "Migrating: Structs and Unions..."
if [[ -d "gfg-Trials/struct n union" ]]; then
    for file in "gfg-Trials/struct n union"/*.cpp; do
        if [[ -f "$file" ]]; then
            filename=$(basename "$file")
            kebab_name=$(echo "$filename" | sed 's/\([A-Z]\)/-\1/g' | tr '[:upper:]' '[:lower:]' | sed 's/^-//')
            move_file "$file" "src/fundamentals/intermediate/structs-unions/$kebab_name"
        fi
    done
fi

# ==========================================
# FUNDAMENTALS - ADVANCED - POINTERS
# ==========================================
print_info "Migrating: Pointers..."
if [[ -d "gfg-Trials/pointers" ]]; then
    for file in gfg-Trials/pointers/*.cpp; do
        if [[ -f "$file" ]]; then
            filename=$(basename "$file")
            kebab_name=$(echo "$filename" | sed 's/\([A-Z]\)/-\1/g' | tr '[:upper:]' '[:lower:]' | sed 's/^-//' | sed 's/ /-/g')
            move_file "$file" "src/fundamentals/advanced/pointers/$kebab_name"
        fi
    done
fi

# ==========================================
# FUNDAMENTALS - ADVANCED - REFERENCES
# ==========================================
print_info "Migrating: References..."
if [[ -d "gfg-Trials/Reference" ]]; then
    for file in gfg-Trials/Reference/*.cpp; do
        if [[ -f "$file" ]]; then
            filename=$(basename "$file")
            kebab_name=$(echo "$filename" | sed 's/\([A-Z]\)/-\1/g' | tr '[:upper:]' '[:lower:]' | sed 's/^-//' | sed 's/ /-/g')
            move_file "$file" "src/fundamentals/advanced/references/$kebab_name"
        fi
    done
fi

# ==========================================
# FUNDAMENTALS - ADVANCED - TEMPLATES
# ==========================================
print_info "Migrating: Templates..."
if [[ -d "gfg-Trials/templates" ]]; then
    for file in gfg-Trials/templates/*.cpp; do
        if [[ -f "$file" ]]; then
            filename=$(basename "$file")
            kebab_name=$(echo "$filename" | sed 's/\([A-Z]\)/-\1/g' | tr '[:upper:]' '[:lower:]' | sed 's/^-//')
            move_file "$file" "src/fundamentals/advanced/templates/$kebab_name"
        fi
    done
fi

# ==========================================
# OOP - BEGINNER - CLASSES
# ==========================================
print_info "Migrating: OOP Classes..."
move_file "gfg-Trials/Object-Oriented Programming/class.cpp" "src/oop/beginner/classes/class.cpp"
move_file "gfg-Trials/Object-Oriented Programming/classesAndClassMembers.cpp" "src/oop/beginner/classes/classes-and-class-members.cpp"
move_file "gfg-Trials/Object-Oriented Programming/classSample.cpp" "src/oop/beginner/classes/class-sample.cpp"
move_file "gfg-Trials/Object-Oriented Programming/arithmetic.cpp" "src/oop/beginner/classes/arithmetic.cpp"
move_file "gfg-Trials/Object-Oriented Programming/newFIle.cpp" "src/oop/beginner/classes/new-file.cpp"

# ==========================================
# OOP - BEGINNER - CONSTRUCTORS
# ==========================================
print_info "Migrating: OOP Constructors..."
move_file "gfg-Trials/Object-Oriented Programming/basic constructor.cpp" "src/oop/beginner/constructors/basic-constructor.cpp"
move_file "gfg-Trials/Object-Oriented Programming/ConstructorInitializationwithoutInitializerList.cpp" "src/oop/beginner/constructors/constructor-initialization-without-initializer-list.cpp"
move_file "gfg-Trials/Object-Oriented Programming/constructorWithInitializer.cpp" "src/oop/beginner/constructors/constructor-with-initializer.cpp"
move_file "gfg-Trials/Object-Oriented Programming/shallowVSdeep.cpp" "src/oop/beginner/constructors/shallow-vs-deep.cpp"
move_file "gfg-Trials/Object-Oriented Programming/manual swapp.cpp" "src/oop/beginner/constructors/manual-swap.cpp"

# ==========================================
# OOP - ADVANCED - STATIC MEMBERS
# ==========================================
print_info "Migrating: OOP Static Members..."
if [[ -d "gfg-Trials/Object-Oriented Programming/static" ]]; then
    for file in "gfg-Trials/Object-Oriented Programming/static"/*.cpp; do
        if [[ -f "$file" ]]; then
            filename=$(basename "$file")
            kebab_name=$(echo "$filename" | sed 's/ /-/g' | tr '[:upper:]' '[:lower:]')
            move_file "$file" "src/oop/advanced/static-members/$kebab_name"
        fi
    done
fi

# ==========================================
# DATA STRUCTURES - STACKS
# ==========================================
print_info "Migrating: Data Structures - Stacks..."
move_file "dsa/Array/2_stackDemonstration.cpp" "src/data-structures/linear/stacks/stack-demonstration.cpp"
move_file "dsa/Valenzuela_class_stack_activity.cpp" "src/data-structures/linear/stacks/valenzuela-class-stack-activity.cpp"

# ==========================================
# PROJECTS
# ==========================================
print_info "Migrating: Projects..."
move_file "dsa/Array/1_terminalCalendar.cpp" "src/projects/calendar-system/main.cpp"
move_file "dsa/Array/3_EnrollmentSystem.cpp" "src/projects/enrollment-system/main.cpp"
move_file "dsa/webbrowser.cpp" "src/projects/web-browser-sim/main.cpp"

# ==========================================
# DOCUMENTATION
# ==========================================
print_info "Migrating: Documentation..."
move_file "gfg-Trials/headerfiles.md" "docs/topics/header-files.md"
move_file "gfg-Trials/Terms.md" "docs/topics/terminology.md"
move_file "gfg-Trials/useful func.md" "docs/topics/useful-functions.md"
move_file "gfg-Trials/useful keywords.md" "docs/topics/keywords.md"
move_file "gfg-Trials/useful operator.md" "docs/topics/operators.md"
move_file "gfg-Trials/Arrays/array.md" "docs/topics/arrays.md"
move_file "gfg-Trials/Flow Control/Notes.md" "docs/topics/flow-control.md"
move_file "gfg-Trials/Loops/Loops.md" "docs/topics/loops.md"
move_file "gfg-Trials/Object-Oriented Programming/oop desc.md" "docs/topics/oop-basics.md"
move_file "gfg-Trials/pointers/pointers.md" "docs/topics/pointers.md"
move_file "gfg-Trials/Reference/L and R Values.md" "docs/topics/lvalues-rvalues.md"
move_file "gfg-Trials/Reference/range-based_forLoops.md" "docs/topics/range-based-loops.md"
move_file "gfg-Trials/Reference/reference.md" "docs/topics/references.md"
move_file "docs/ai-implementations.md" "docs/ai-implementations/historical-log.md"

# ==========================================
# MOVE REMAINING FILES TO ARCHIVE
# ==========================================
print_info "Moving remaining files to archive..."
[[ -d "gfg-Trials" ]] && git mv gfg-Trials "$ARCHIVE_DIR/" 2>/dev/null
[[ -d "dsa" ]] && git mv dsa "$ARCHIVE_DIR/" 2>/dev/null

###############################################################################
# Post-Migration
###############################################################################

print_header "Migration Complete"

echo ""
print_info "Statistics:"
echo "  Files moved: $moved_files"
echo "  Directories moved: $moved_dirs"
echo "  Errors: $errors"
echo ""

if [[ $errors -eq 0 ]]; then
    print_success "Migration completed successfully! ✨"
else
    print_warning "Migration completed with $errors errors"
fi

echo ""
print_info "Next steps:"
echo "  1. Review the changes: git status"
echo "  2. Test the build: cd build && cmake .. && cmake --build ."
echo "  3. Commit the changes: git add . && git commit -m 'Restructure: Migrate to industry-standard layout'"
echo "  4. If issues occur, restore from backup: $BACKUP_DIR"
echo ""

print_success "All done! 🚀"
