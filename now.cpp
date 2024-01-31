#include <string>
#include <iostream>
using namespace std;
class Person {
public:
    string name;
    Person(string personName) : name(personName) {
    }
    void getDetails() {
        cout << "Name: " << name << endl;
    }
};
int main() {
    Person p1("Mary");
    p1.getDetails();
    return 0;
}
