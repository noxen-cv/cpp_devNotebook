 # Reference
 
 A reference in C++ is a variable that acts as an alias for another variable. It is created by using the ampersand (&) symbol during declaration. Once a reference is initialized, it cannot be changed to refer to another variable.
 
 Key Properties of References:
* Must Be Initialized: A reference must be assigned a valid variable at the time of declaration.
* Cannot Be NULL: References cannot hold NULL values; they must always refer to a valid variable.
* Cannot Be Changed: After initialization, a reference cannot be made to refer to a different variable.


    ** a reference (&) is not a datatype — it is a qualifier or alias, not a type itself.**

## Function Parameters & References
    Function parameters can be either pass-by-value or pass-by-reference. Pass-by-value means that the function receives a copy of the data that is passed to it, while pass-by-reference means that the function receives a reference to the original data.

        Issues with Passing by Value
            When variables are passed to functions by value, the function works on a copy of the variable, not the original. This approach has two major limitations:
                1. Changes Are Not Reflected Outside the Function
                2. Performance Issues with Large Data Structures

        // Passing parameters by reference can be more efficient than pass-by-value because it avoids the overhead of creating and copying the data. However, it is important to be careful when using pass-by-reference, as it can lead to unintended side effects if the function modifies the original data. //


(USE const when function should not modify the variable being referred to.)
ex. void fun(const string &s)


A Copy Constructor  is called when an object is passed by value. Copy constructor itself is a function. So if we pass argument by value in a copy constructor, a call to copy constructor would be made to call copy constructor which becomes a non-terminating chain of calls. Therefore compiler doesn’t allow parameters to be pass by value and must use reference.





