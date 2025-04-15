#include <iostream>
#include <iomanip>
#include <string>
using namespace std;

namespace Calendar {
    int getDayStart(int year, int month) {
        if(month < 3) {
            month +=12;
            year--;
        }
        int q = 1;
        int K = year % 100;
        int J = year / 100;
        int h = (q+ (13 * (month+1))/5 + K + (K/4) + (J/4) + (5*J)) % 7;
        return (h+6) % 7;
    }

    int getDayEnd(int year, int month) {
        int dayInMonth[] = {31,28,31,30,31,30,31,31,30,31,30,31};

        if(month == 2) {
            bool isLeap = (year % 4 == 0 && year % 100 !=0) || (year % 400 == 0);
            return isLeap ? 29 : 28;
        }
        return dayInMonth[month - 1];
    };

    void header() {
        cout << "---------------------------------\n";
        cout << setw(4) << "S" << setw(4) << "M" << setw(4) << "T" << setw(4) << "W" << setw(4) << "TH" << setw(4) << "F" << setw(4) << "S" << setw(4) << endl;
        cout << "---------------------------------\n";
    }

    string getMonth(int selMonth){
        string monthName;
        string monthArr[12] = {"January", "February", "March", "April", "May", "June", "July", "August","September", "October", "November", "December"};

        switch(selMonth){
            case 1: monthName = monthArr[0]; break;
            case 2: monthName = monthArr[1]; break;
            case 3: monthName = monthArr[2]; break;
            case 4: monthName = monthArr[3]; break;
            case 5: monthName = monthArr[4]; break;
            case 6: monthName = monthArr[5]; break;
            case 7: monthName = monthArr[6]; break;
            case 8: monthName = monthArr[7]; break;
            case 9: monthName = monthArr[8]; break;
            case 10: monthName = monthArr[9]; break;
            case 11: monthName = monthArr[10]; break;
            case 12: monthName = monthArr[11]; break;
            default: monthName = "NaN";
        }
        return monthName;
    }

    void genCalendar (int month, int year, int mStart, int mEnd) {
        cout << "Showing Calendar For " << getMonth(month) << " " << year << endl;
        header();
        
        for (int i=0; i < mStart; i++) {
            cout << setw(4) << " ";
        }
        for (int i=1; i <= mEnd; i++) {
            cout << setw(4) << i;
            if ((i + mStart) % 7 == 0) {
                cout << endl;
            }
        }
    cout << endl;
    cout << "----------------------------\n";
    }
}


using namespace Calendar;

int main(){
    int month, year;
    char response;

    do {
        cout << "Simple Calendar Application In Terminal \n With C++ Made by Christian Valenzuela" << endl;
        cout << "Enter Month (1-12): ";
        cin >> month;
        if(month <= 0 || month > 12) {
             cout << "Invalid Month Selection" << endl; }

        else {
            cout << "Enter Year: ";
            cin >> year;
            cout << endl;
            genCalendar(month, year, getDayStart(year,month),getDayEnd(year,month));
            
            cout << "Would you like to generate another Calendar?: ";
            cin >> response;
            if(response =='n') break;}
            
        }while(response = 'y');
}
