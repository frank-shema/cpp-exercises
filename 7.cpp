#include <iostream>
#include <string>

class Employee {
private:
    std::string name;
    int employeeID;
    double salary;

public:
    // Constructor
    Employee(const std::string& empName, int empID) {
        name = empName;
        employeeID = empID;
        salary = 0.0;
    }

    // Member function to calculate and set salary based on performance
    void setSalary(double performanceScore) {
        if (performanceScore >= 0.9) {
            salary = 5000.0;
        } else if (performanceScore >= 0.8) {
            salary = 4000.0;
        } else if (performanceScore >= 0.7) {
            salary = 3000.0;
        } else {
            salary = 2000.0;
        }
    }

    // Getter function for salary
    double getSalary() const {
        return salary;
    }
};

int main() {
    // Create an instance of Employee with name "John" and ID 123
    Employee employee("John", 123);

    // Set the salary based on performance score 0.85
    employee.setSalary(0.85);

    // Get and display the salary
    std::cout << "Employee salary: $" << employee.getSalary() << std::endl;

    return 0;
}