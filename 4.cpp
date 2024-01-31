#include <iostream>
#include <string>

class Car {
private:
    std::string company;
    std::string model;
    int year;

public:
    // Setter functions
    void setCompany(const std::string& newCompany) {
        company = newCompany;
    }

    void setModel(const std::string& newModel) {
        model = newModel;
    }

    void setYear(int newYear) {
        year = newYear;
    }

    // Getter functions
    std::string getCompany() const {
        return company;
    }

    std::string getModel() const {
        return model;
    }

    int getYear() const {
        return year;
    }
};

int main() {
    // Create an instance of Car
    Car car;

    // Set the values using setter functions
    car.setCompany("Toyota");
    car.setModel("Camry");
    car.setYear(2021);

    // Get and display the values using getter functions
    std::cout << "Company: " << car.getCompany() << std::endl;
    std::cout << "Model: " << car.getModel() << std::endl;
    std::cout << "Year: " << car.getYear() << std::endl;

    return 0;
}