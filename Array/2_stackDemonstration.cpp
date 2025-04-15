// ARRAY IMPLEMENTATION //
#include <iostream>
#include <iomanip>
#include <string>

using namespace std;
int stack[6];
int top = -1;



void header() {
    cout << "Welcome to Stack Operations" << endl;
    cout << "==============================" << endl;
    cout << "(1) Add an Element to the stack\n";
    cout << "(2) Remove the top element in the Stack\n";
    cout << "(3) Display Stack Element\n";
    cout << "(4) Exit\n";
    return;
}

void push (int stack[], int a,int n) {
    if (top == n-1){
        cout << "=========================" << endl;
        cout << setw(5) << "STACK OVERFLOW" << setw(5) << endl;
        cout << "=========================" << endl;
        return;
    }
    else {
        top = top+1;
        stack[ top ] = a;
    }    
    
}

bool isEmpty(){
    if (top == -1)
    return true;
    else
    return false;
}

void pop() {
    if (isEmpty()){
    cout << "=========================\n";
    cout << setw(5) << "STACK UNDERFLOW" << setw(5) << endl;
    cout << "=========================\n" << endl;}
    else
    top = top - 1;
}

int size() {
    return top + 1;
}

int topElement (int stack[]){
    return stack [ top ];
}


int main() {
    int response;
    int element;
    
    do {
        header();
        cout << "Enter Option: ";
        cin >> response;

        switch(response) {
            case 1: 
                cout << "Enter Element number: "; cin >> element; cout << endl; 
                push(stack, element, 6);
                cout << "Current element in the top: " << topElement(stack) << endl;
                cout << "\n" << endl;
                break;
            case 2: 
                cout << "Removing Top Element: " << topElement(stack) << endl;
                pop();
                cout << "Current Top: " << topElement(stack) << endl;
                cout << "\n" << endl;
                break;
            case 3:
                cout << "Current size of Stack: " << size() << endl << endl;
                
                if (size() == 0) {
                    cout << "|   |"  << endl << endl;
                    break;
                }
                else{                    
                for(int i = top; i >= 0; i--){
                    cout << "| " << stack[i] << " |" << endl;
                    }
                }
                break;
            case 4: 
                cout << "Exiting..." << endl << endl;
                return false;
            
            default: 
                cout << "Invalid Input... Please try again!\n" << endl;
                break;                    
                }
    } while(true);
    return 0;
}