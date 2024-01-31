#include <iostream>
#include <string>

class Person {
private:
    std::string name;
    int age;
    std::string country;

public:
    // Setter functions
    void setName(const std::string& newName) {
        name = newName;
    }

    void setAge(int newAge) {
        age = newAge;
    }

    void setCountry(const std::string& newCountry) {
        country = newCountry;
    }

    // Getter functions
    std::string getName() const {
        return name;
    }

    int getAge() const {
        return age;
    }

    std::string getCountry() const {
        return country;
    }
};

int main() {
    // Create an instance of Person
    Person person;

    // Set the values using setter functions
    person.setName("John Doe");
    person.setAge(25);
    person.setCountry("USA");

    // Get and display the values using getter functions
    std::cout << "Name: " << person.getName() << std::endl;
    std::cout << "Age: " << person.getAge() << std::endl;
    std::cout << "Country: " << person.getCountry() << std::endl;

    return 0;
}