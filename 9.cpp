#include <iostream>
#include <string>

class Student {
private:
    std::string name;
    std::string className;
    int rollNumber;
    int marks;

public:
    // Constructor
    Student(const std::string& studentName, const std::string& studentClass, int studentRollNumber, int studentMarks) {
        name = studentName;
        className = studentClass;
        rollNumber = studentRollNumber;
        marks = studentMarks;
    }

    // Member function to calculate the grade based on marks
    std::string calculateGrade() const {
        if (marks >= 90) {
            return "A+";
        } else if (marks >= 80) {
            return "A";
        } else if (marks >= 70) {
            return "B";
        } else if (marks >= 60) {
            return "C";
        } else if (marks >= 50) {
            return "D";
        } else {
            return "F";
        }
    }

    // Member function to display student information
    void displayInfo() const {
        std::cout << "Name: " << name << std::endl;
        std::cout << "Class: " << className << std::endl;
        std::cout << "Roll Number: " << rollNumber << std::endl;
        std::cout << "Marks: " << marks << std::endl;
        std::cout << "Grade: " << calculateGrade() << std::endl;
    }
};

int main() {
    // Create an instance of Student with name "John Doe", class "10th", roll number 1, and marks 85
    Student student("John Doe", "10th", 1, 85);

    // Display student information
    student.displayInfo();

    return 0;
}