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

