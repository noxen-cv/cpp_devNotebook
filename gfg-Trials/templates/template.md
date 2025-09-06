# Template

Templates allow developers to write generic code, where the data type is determined at compile time. The idea is to write code once and use it for any data type. Instead of rewriting the same logic for different data types (e.g., int, float, char), templates let the compiler generate a specific type-based implementation when needed.

Key Characteristics of Templates:
Write Once, Use for Any Data Type: Templates enable defining a single generic function or class that works for all data types.
Compiler-Generated Code: The compiler automatically generates type-specific code during compilation based on the template.
Avoids Redundancy: Saves effort by reusing the same logic for different data types.
Better Than Macros: Unlike macros, templates perform type checking during compilation, making the code safer and less error-prone.


Types of Templates in C++
There are two types of templates in C++:

Function Templates:
Used to create generic functions.
Examples: Sorting, searching, finding maximum or minimum values in an array, etc.
Class Templates:
Used to create generic classes.
Examples: Data structures like stacks, queues, deques, and other containers.

Internal Process:
When a function template is called:

The compiler generates a type-specific version of the function, replacing the template parameter (T) with the data type provided.


Why Templates Are Better Than Macros:
Type Checking: Templates ensure type safety during compilation.
Error-Free: Unlike macros, templates do not blindly replace text, reducing the chances of errors.
Ease of Debugging: Errors in templates are easier to debug compared to macros.
Reusable: Templates enable creating generic code for multiple data types, which macros cannot achieve efficiently.

Macros: 
    #define myMax(X, Y) ((X) > (Y) ? (X) : (Y))



    Syntax for Defining Function Templates
    A function template in C++ is defined using the following syntax:

    template <typename T>

    T functionName(T parameter1, T parameter2, ...) {
        
        // code

    }


        ### template: A keyword that tells the compiler the following function is a template.
        ### <typename T>: Specifies a placeholder for the data type. This T can be replaced by any type during compilation (e.g., int, float, char, etc.).
        You can replace typename with class, as both keywords are interchangeable in this context.
        Multiple placeholders can also be used


A class template allows you to parameterize the data type. 
    - Define a generic class using the template keyword.
    - Use typename or class to define the data type as a parameter (e.g., T).
    - The compiler generates a type-specific class during instantiation when you specify the data type.

You can create a stack class that works with int, float, or even user-defined data types like Student.
A pair class can represent a pair of any two data types such as integers, strings, or even objects.


Defining Class Methods Outside the Class
 In C++, you can define class methods outside the class using the scope resolution operator (::). For templated classes, you must include the template declaration when defining methods.