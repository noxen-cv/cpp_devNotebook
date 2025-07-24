


        L-Values: Objects that persist beyond a single expression, such as variables or references. You can take their address using the & operator.
        Example: int &x = 10;  // 'x' is an L-value

        R-Values: Temporary objects or literals that exist only during the evaluation of an expression and cannot be referenced directly. They cannot have their address taken.
        Example: int x = 10 + 20; // '10 + 20' is an R-value


        Regular references cannot bind to R-values, meaning you cannot reference temporary objects directly. (e.g., literals or temporary objects):
        Example: int &x = 3; // Invalid: '3' is an R-value 


        Example: String
        int main()
        {
            string s1 = "GFG ", s2 = "Courses";
            string &&s3 = s1 + s2;
            s3 = "Welcome to " + s3;
            cout << s3 << endl;
            return 0;
        }