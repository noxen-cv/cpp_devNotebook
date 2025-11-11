#include <iostream>

using namespace std;

class Student {
    protected:
        int roll_number;
    public:
        void set_rollnumber(int no) {
                no = roll_number;
        }

        virtual ~Student() {}
};

class Test : virtual public Student {
    protected:
        int s1, s2, s3, s4, s5;
    public:
        void set_Marks(const float* Marks_array) {
            s1 = Marks_array[0];
            s2 = Marks_array[1];
            s3 = Marks_array[2];
            s4 = Marks_array[3];
            s5 = Marks_array[4];
        }    
    virtual ~Test() {}
};

class Result : virtual public Test {
    
    public:
        void Display() {
            int total_Marks = s1 + s2 + s3 + s4 +5;

            int avg_Marks = total_Marks / 5;

            cout << "Roll Number: " << roll_number << endl;
            cout << "Total Marks: " << total_Marks << endl;
            cout << "Average: " << avg_Marks << endl;
        }
};

int main(){
    Result studentData;
    int studentCount;
    int rollNum;
    float inputMarks[5];
    
    
    // User Input
    cout << "Enter Number of Students: ";
    cin >> studentCount;

    for(int i = 1; i < studentCount; i++) {
        rollNum = i;

        cout << "Entering Data for Roll num: " << rollNum << endl;

        for(int j = 0; j < 5; ++j) {
            cout << "Enter Mark for Subject: ";
            cin >> inputMarks[j];
            j++;
        }
    }

    // enter Data in Classes

    studentData.set_rollnumber(rollNum);
    studentData.set_Marks(inputMarks);
    
    // Output

    cout << "Last Output: ";
    studentData.Display();

}