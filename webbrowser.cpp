#include <iostream>
#include <iomanip>
#include <string>
using namespace std;

class webbrowser {
private: 
    static const int MAX_INPUT=100;
    int current = -1;
    string history[MAX_INPUT];
public:
    void header(){
        cout << "Web Browser Activities" << endl;
        cout << "-----------------------" << endl;
    }
    void visitPage(string url){
        if (current == MAX_INPUT){
            cout << "Stack Overflow\n Maximum Visit Reached!";
        }
        else {
            current++;
            history[current] = url;
            cout << "Current Page: " << history[current] << endl;
        }
    }   
    bool isEmpty(){
        if(current == -1){
            return true;
        }
        else{
            return false;
        }
    }
    void previousPage(){
        if (isEmpty()) {
            cout << "Stack Underflow\nNo Pages Left" << endl;
        }
        else { 
            current = current-1;
            cout << "Current Page: " << history[current] << endl;
        } 
    }    

    void showHistory() {
        for(int i=current; i >=0; i--) {
            cout << i+1 << "." << history[i] << endl;
        }
    }

};


int main() {
    webbrowser wb;
    int choice;

    while(true) {
        wb.header();

        cout << "Choose Option:\n" <<
        "1 Visit Page\n" <<
        "2 Go back to Previous Page\n" <<
        "3 History\n" <<
        "4 Exit Web Browser" << endl <<
        "Option:";
        cin >> choice;
        cin.ignore();

        if (choice == 1){
            cout << "Url: ";
            string search;
            cin >> search;
            string url = "https://" + search + ".com";     
            wb.visitPage(url);
        }
        else if (choice == 2){
            wb.previousPage();
        }
        else if (choice == 3){
            cout << "Web Search History:\n" <<
            "----------------------\n";
            wb.showHistory();

        }
        else if (choice == 4){
            cout << "Exiting Browser" << endl;
            break;
        }
        else {
            cout << "\nInvalid Input, Please Try Again!\n" << endl;
        }

    }
    return 0;
}