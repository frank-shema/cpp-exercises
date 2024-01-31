#include <iostream>

using namespace std;

struct Student {
  string name;
  int age;
  string school;

  string getName() {
    return name;
  }

  int getAge() {
    return age;
  }

  string getSchool() {
    return school;
  }
};

int main() {
  Student student1 = {"John", 18, "MIT"};
  Student student2 = {"Jane", 19, "Stanford"};
  Student student3 = {"Mike", 20, "Berkeley"};

  cout << "Student 1: " << student1.getName() << ", " << student1.getAge() << ", " << student1.getSchool() << endl;
  cout << "Student 2: " << student2.getName() << ", " << student2.getAge() << ", " << student2.getSchool() << endl;
  cout << "Student 3: " << student3.getName() << ", " << student3.getAge() << ", " << student3.getSchool() << endl;

  return 0;
}