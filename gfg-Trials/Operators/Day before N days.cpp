#include <iostream>
#include <iomanip>

using namespace std;

int main() {
    int d, n; // d = current day, n = number of days to go back

    cout << "Enter the current Day: ";
    cin >> d;  
    cout << endl << "Enter the number of days to go back: ";
    cin >> n;

    int x = n % 7;  // Keeps the number of days only within a week

    int ans = d - x; // Calculating from current day to previous day going back

    if (ans >= 0) {
        ans += 7;
        cout << ans; }
    else { cout << ans;}
    
    return 0;


    /* Future Features 
    > Error Handling (User Input Limitation)
        > If the user inputs incorrect day numbering, prompt them to enter a valid day.
    > Refactor in OOP form 
    > String Character Input (Monday, Tuesday....)
    > Includes accurate calendar inputs(Months, Year) with correct Logic 
    > User Interface Enhancements (CLI)*/


}