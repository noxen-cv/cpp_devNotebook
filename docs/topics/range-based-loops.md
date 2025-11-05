

    a simpler and more elegant way to iterate over collections like arrays, vectors, or other containers. When combined with references, it becomes even more powerful, addressing issues like element modification and performance.

    Syntax :

        for (data_type variable : collection) {
            // Code to execute for each element
        }

        Example: without reference
                    int arr[] = {10, 20, 30};
                    for (int x : arr) { // 'x' is a copy of each element
                        x += 2; // Modifies the copy, not the original array
                    }
                    for (int x : arr) {
                        cout << x << " "; // Original array remains unchanged
                    }

                    Result: 10 20 30

        Example: With Reference
                    int arr[] = {10, 20, 30};
                    for (int &x : arr) { 
                        x += 2; // Modifies the original array
                    }
                    for (int x : arr) {
                        cout << x << " "; 
                    }

                    Result: 12 22 32

        Example: with const reference
                    string arr[] = {"GFG", "C++ Course", "learning"};
                    for (const string &s : arr) { // 's' is a const reference
                        cout << s << "\n";
                    }

                    Result: GFG
                            C++ Course
                            learning

                    NOTE: If the goal is only to read the elements without modifying them, you can use const references. This ensures the safety of the data while avoiding the cost of copying.
                    