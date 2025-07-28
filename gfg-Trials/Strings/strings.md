# Stirngs in CPP

    - a sequence of characters.

## Why Strings Are Special
- Small Character Set:
- Separator-Free Representation
- Internal Presentation (Characters like 'A' to 'Z' are mapped to integer values 65 to 90. etc)


## Types of Strings in C+
- C - Style Srings (char str[] = "hello"; | char str[] = {h,e,l,l,o,\0})
- C++ String Class (std::string str = "hello";)



### String Comparison in C++ 
    find() - searches for the first occurrence of a substring within a string.
        Example:    
                string str = "geeksforgeeks";

                int res = str.find("eek");
                if (res == string::npos)
                    cout << "Not Present\n";
                else
                    cout << "First occurrence at index " << res << "\n"; 
                
                Output: First occurrence at index 1
        
    string::npos -  constant that represents “no position” or “not found”

    Comparing Strings
        built-in operators to compare strings lexicographically(in alphabetical order)
        operators: ==: Checks if two strings are equal.
                    <: Checks if one string is lexicographically smaller.
                    >: Checks if one string is lexicographically greater.
                    <=, >=: Additional comparison options.
            Example:    string s1 = "abc";
                        string s2 = "bcd";

                        if (s1 == s2)
                            cout << "Same\n";
                        else if (s1 < s2)
                            cout << "Smaller\n";
                        else
                            cout << "Greater\n";

===

## Strings input using cin and getline()

    std::cin stops reading input at first space, or newline character
    Example:    
        Chris Tian
        Ouptut: Chris
    getline() reads all in one line, makes it ideal for full name or paragraph
    Example:
        getline(cin, name, ',') // getline offers custom delimiter that stops reading input once encountered.
        Chris Tian V, la
        Output Chris Tian V



