    #include <iostream>
    #include <iomanip>
    #include <string>

    namespace EnrollmentSystem {
        using namespace std;

        const int MAX_COURSES = 10;
        const int YEARS = 4;

        namespace InputCourses {
            void enterCourses(string courseNames[], int numCourses) {
                for (int i = 0; i < numCourses; i++) {
                    cout << "Enter Course: ";
                    getline(cin, courseNames[i]);
                }
                return;
            }
        }

        namespace ListCourses {
            void listCourses(string courseNames[], int numCourses) {
                cout << "\nCourses entered are the following:" << endl;
                for (int i = 0; i < numCourses; i++) {
                    cout << i + 1 << ". " << courseNames[i] << endl;
                }
            }
        }

        namespace InputPopulation {
            void inputPopulation(string courseNames[], int populations[][YEARS], int numCourses, int years[]) {
                for (int y = 0; y < YEARS; y++) {
                    cout << "\nEnter year selection: " << years[y] << endl;
                    for (int i = 0; i < numCourses; i++) {
                        cout << "Enter Population for " << courseNames[i] << ": ";
                        cin >> populations[i][y];
                    }
                }
            }
        }

        namespace DisplayRecords {
            void displayRecords(string courseNames[], int populations[][YEARS], int numCourses) {
                cout << "\nCourses\t| 2022\t| 2023\t| 2024\t| 2025\t| Ave\t|" << endl;
                cout << "-----------------------------------------------------" << endl;
                for (int i = 0; i < numCourses; i++) {
                    cout << courseNames[i] << "\t|";
                int sum = 0;
                    for (int y = 0; y < YEARS; y++) {
                        cout << populations[i][y] << "\t|";
                        sum += populations[i][y];
                    }
                    
                }
                cout << "======================================================" << endl;
            }
        }

        namespace SearchCourses {
            void searchCourse(string courseNames[], int populations[][YEARS], int numCourses) {
                string searchCourse;
                cout << "\nSearch Courses: ";
                cin >> searchCourse;
                
                
                for (int i = 0; i < numCourses; i++) {
                    if (searchCourse == courseNames[i]) {
                        cout << "\n" << courseNames[i] << endl;
                        int sum = 0;
                        for (int y = 0; y < YEARS; y++) {
                            cout << populations[i][y] << " ";
                            sum += populations[i][y];
                        }
                        cout << "\nAverage Enrolled students: " << setw(5) << (float)sum / YEARS << endl;
                        break;
                    }
                    else {
                        cout << "Course not found!" << endl;
                        break;
                    }  
                }
            }
        }
    }

    int main() {
        using namespace::EnrollmentSystem;
        string courseNames[MAX_COURSES];
        int populations[MAX_COURSES][YEARS] = {0};
        int numCourses = 0;
        int years[YEARS] = {2022, 2023, 2024, 2025};
        int option;
        
        cout << "Enter Number of Courses: ";
        cin >> numCourses;
        cin.ignore();
        
        do {
            cout << "\n+---------------------+" << endl;
            cout << "| Course Records      |" << endl;
            cout << "+---------------------+" << endl;
            cout << "| [1] Enter Courses   |" << endl;
            cout << "| [2] List Courses    |" << endl;
            cout << "| [3] Input Population|" << endl;
            cout << "| [4] Display Records |" << endl;
            cout << "| [5] Search Courses  |" << endl;
            cout << "| [6] Exit            |" << endl;
            cout << "+---------------------+" << endl;


            cout << "\nEnter Option: ";
            cin >> option;
            cin.ignore();
            
            switch (option) {
                case 1:
                    InputCourses::enterCourses(courseNames, numCourses);
                    break;
                case 2:
                    ListCourses::listCourses(courseNames, numCourses);
                    break;
                case 3:
                    InputPopulation::inputPopulation(courseNames, populations, numCourses, years);
                    break;
                case 4:
                    DisplayRecords::displayRecords(courseNames, populations, numCourses);
                    break;
                case 5:
                    SearchCourses::searchCourse(courseNames, populations, numCourses);
                    break;
                case 6:
                    cout << "Exiting program..." << endl;
                    break;
                default:
                    cout << "Invalid option, please try again." << endl;
            }
        } while (option != 6);
        return 0;
    }
