#include <iostream>
#include <string>
using namespace std;
class Employee {
private:
    string name;
    int employeeID;
    double salary;

public:
    Employee(string empName, int empID, double empSalary)
        : name(empName), employeeID(empID), salary(empSalary) {}
    void setName(const string& empName) {
        name = empName;
    }
    string getName() const {
        return name;
    }
    void setEmployeeID(int empID) {
        employeeID = empID;
    }
    int getEmployeeID() const {
        return employeeID;
    }
    void setSalary(double empSalary) {
        salary = empSalary;
    }
    double getSalary() const {
        return salary;
    }
    void calculateSalary(int performanceRating) {
        if (performanceRating < 1 || performanceRating > 5) {
            cout << "Invalid performance rating. Please enter a value between 1 and 5." << endl;
            return;
        }
        double percentage = 0.0;
        switch (performanceRating) {
            case 1:
                percentage = -10.0; 
                break;
            case 2:
                percentage = -5.0;  
                break;
            case 3:
                percentage = 0.0;   
                break;
            case 4:
                percentage = 5.0;   
                break;
            case 5:
                percentage = 10.0;  
                break;
        }

        salary += salary * (percentage / 100.0);
    }

    void displayEmployeeDetails() const {
        cout << "Employee Name: " << name << endl;
        cout << "Employee ID: " << employeeID << endl;
        cout << "Salary: $" << salary << endl;
    }
};

int main() {
    string name;
    int employeeID;
    double initialSalary;
    int performanceRating;
    cout << "Enter employee name: ";
    getline(cin, name);
    cout << "Enter employee ID: ";
    cin >> employeeID;
    cout << "Enter initial salary: $";
    cin >> initialSalary;
    Employee emp(name, employeeID, initialSalary);
    cout << "Enter performance rating (1-5): ";
    cin >> performanceRating;
    emp.calculateSalary(performanceRating);
    cout << "\nEmployee details:" << endl;
    emp.displayEmployeeDetails();
    return 0;
}
