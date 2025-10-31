#include <iostream>
#include <cctype>
#include <string>
using namespace std;

class CollegeCourse {
private:
    string courseID;
    char grade;
    int credits;
    int gradePoints;
    float honorPoints;

public:
    // 1. Set course ID
    void set_CourseId(string CID) {
        courseID = CID;
    }

    // 2. Set grade (convert to uppercase)
    void set_Grade(char g) {
        grade = toupper(g);
    }

    // 3. Set credit
    void set_Credit(int cr) {
        credits = cr;
    }

    // 4. Calculate grade points
    int calculateGradePoints(char g) {
        g = toupper(g);
        switch (g) {
            case 'A': return 10;
            case 'B': return 9;
            case 'C': return 8;
            case 'D': return 7;
            case 'E': return 6;
            case 'F': return 5;
            default:  return 0;
        }
    }

    // 5. Calculate honor points
    float calculateHonorPoints(int gp, int cr) {
        return gp * cr;
    }

    // 6. Display function
    void display() {
        gradePoints = calculateGradePoints(grade);
        honorPoints = calculateHonorPoints(gradePoints, credits);
        cout << gradePoints << " " << honorPoints << endl;
    }
};

int main() {
    CollegeCourse cc;
    int num;
    char grade;
    string courseId;
    int credits;

    cin >> num;
    cin >> grade;
    cin >> courseId;
    cin >> credits;

    cc.set_CourseId(courseId);
    cc.set_Grade(grade);
    cc.set_Credit(credits);
    cc.display();

    return 0;
}
