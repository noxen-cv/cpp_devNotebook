#include <iostream>
#include <iomanip>

using namespace std;

int* reverse(int*);

int main() {
    int arr[] = {20, 40, 60, 80, 100};
    int* ptr = arr;

    ptr++;      // Move pointer to the second element
    cout << arr[0] << " " << arr[1] << "  " << *ptr << endl;
    *ptr++;     // Move pointer to the next element then dereference it (Tricky)
    cout << arr[0] << " " << arr[1] << "  " << *ptr << endl;
    ++*ptr;     // Increment the dereferenced value pointed to by ptr
    cout << arr[0] << " " << arr[1] << "  " << *ptr << endl;
    ++*++ptr;   // Increment the dereferenced value pointed to by ptr after moving it to the next element (Very tricky)
    cout << arr[0] << " " << arr[1] << "  " << *ptr << endl;

    int a = 32, *ptr = &a; // Pointer to integer variable a
    char ch = 'A', &cho = ch;   // Reference to character variable ch
    cho += a;               // Increment the ASCII value of 'A' by 32 which results in 'a'
    *ptr += ch;             // Increment the value of a by the ASCII value of 'a' (which is 97)
    cout << a << ", " << ch << endl; // Output: 129, a

    /* The “ptr” variable is a pointer which holds the address of variable “a”.
     And “*ptr” returns the value of “a” variable. “cho” is a reference variable 
     to “ch”. So any change made to “cho” will be reflected to “ch”. As such, when “cho” 
     is increased by 32, it adds to the ASCII value of “A”(which is 65), and this results 
     to 97 which is the ASCII value of “a”(from the alphabet). So this “a” gets 
     stored in “ch”. As for when “*ptr” is incremented by “ch”, it gives 
     value 97+32=129.*/


     int* ptr1 = (arr+1);   // Pointer to the second element of the array
     cout << *arr + 10 << endl; // Output 30 
     /* *arr is the same as arr[0] which is 20, this means you're dereferencing and accessing 1st element then adds 10 to it,
          thus resulting to 30 + 10 = 30*/


    
    int i;
    int *p = reverse(arr); // Call the reverse function to reverse the array
    cout << "reversed array: ";
    for (i = 0; i < 5; i++) {
        cout << *(p + i) << " "; // Output the reversed array
    }
    cout << endl;

    // Demonstrating pointer to an array
    // Declares and initializes an array of integers
    int num[5];
    int *p5 = num;
    *p5 = 10;
    p5++;
    *p5 = 20;
    p5 = &num[2];
    *p5 = 30;
    p5 = num + 3; 
    *p5 = 40;
    p5 = num;
    *(p5 + 4) = 50;
    cout << "number of arrays: ";
    for (i = 0; i < 5; i++) {
        cout << num[i] << " ";          // Output: 10 20 30 40 50
    }

    cout << endl;

    return 0;
}

int* reversed(int* arr) {
    int i;
    for (i = 0; i < 2; i++){        
        int temp = *(arr + i);      // Store the value of the current element in temp
        *(arr + i) = *(arr + 4 - i);// Swap the current element with the corresponding element from the end
        *(arr + 4 - i) = temp;      // Swap the element from the end with temp
    }
    return arr;
}

