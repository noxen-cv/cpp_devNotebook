# Pointers in C++

Address and Dereference Operators
        Address/Unary Operator (&) - used to get the memory *address* of a variable. / address in hexadecimal format 
        Dereference Operator(*) - used to access the *value* stored at a specific memory address

            int x = 10;
            cout << &x << '\n';    // Print the address of x
            cout << *(&x) << '\n';  // Print the value at the address of x
            return 0;
            
            Result: 0x7fff5354ae8c
                    10

Pointers are symbolic representations of addresses. They enable programs to simulate call-by-reference as well as to create and manipulate dynamic data structures. Iterating over elements in arrays or other data structures is one of the main use of pointers. 

What is a Pointer?
A pointer is a variable that stores the memory address of another variable. In C++, pointers are declared using the * symbol.

            Here's the syntax
            datatype* var_name; 
            int* ptr;           // ptr can point to an address which holds int data


Uses a unary operator(&)


        Example:
                    int x = 10;
                    int *p; 
                    p = &x; 

                    cout << x << '\n'; 
                    cout << *p << '\n'; // Dereferences p to get the value at the address (10)
                    cout << p << '\n';  // Prints the address stored in p (address of x)

Applications of Pointers
 efficient memory management and dynamic programming
        - Changing Passed Parameters
        - Passing Large Objects
        - Dynamic Memory Allocation 