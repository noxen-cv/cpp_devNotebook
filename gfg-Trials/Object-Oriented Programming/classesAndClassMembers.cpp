#include <iostream>
#include <string>


using namespace std;
  
class Employee {  //Class Declaration
    public:
        string id, name;
        int years;  //experience (in years)
         
        Employee(string id, string name, int years) {
            this->id = id;
            this->name = name;
            this->years = years;
        }
        
        void work() {
            cout << "Employee: " << this->id << " is working\n";
        }
};
  
int main()
{
    //Class Instantiation (Direct)
    Employee emp("GFG123", "John", 3);
    
    //Class Instantiation (Indirect)
    Employee *emp_ptr = new Employee("GFG456", "James", 4);
     
    cout << "Employee ID: " << emp.id << endl;
    cout << "Name: " << emp.name << endl;
    cout << "Experience (in years): " << emp.years << endl;
    
    emp.work();
    cout << endl;
    
    cout << "Employee ID: " << emp_ptr->id << endl;
    cout << "Name: " << emp_ptr->name << endl;
    cout << "Experience (in years): " << emp_ptr->years << endl;
    
    emp_ptr->work();
    return 0;
}