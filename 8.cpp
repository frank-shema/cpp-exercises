#include <iostream>

class Date {
private:
    int day;
    int month;
    int year;

public:
    // Setter functions
    void setDay(int newDay) {
        day = newDay;
    }

    void setMonth(int newMonth) {
        month = newMonth;
    }

    void setYear(int newYear) {
        year = newYear;
    }

    // Getter functions
    int getDay() const {
        return day;
    }

    int getMonth() const {
        return month;
    }

    int getYear() const {
        return year;
    }

    // Function to validate if the date is valid
    bool isValidDate() const {
        if (year < 0 || month < 1 || month > 12 || day < 1) {
            return false;
        }

        int daysInMonth = 31; // Assume maximum days in a month is 31

        if (month == 4 || month == 6 || month == 9 || month == 11) {
            daysInMonth = 30;
        } else if (month == 2) {
            // Check for leap year
            if ((year % 4 == 0 && year % 100 != 0) || (year % 400 == 0)) {
                daysInMonth = 29;
            } else {
                daysInMonth = 28;
            }
        }

        return day <= daysInMonth;
    }
};

int main() {
    // Create an instance of Date
    Date date;

    // Set the values using setter functions
    date.setDay(31);
    date.setMonth(12);
    date.setYear(2022);

    // Get and display the values using getter functions
    std::cout << "Day: " << date.getDay() << std::endl;
    std::cout << "Month: " << date.getMonth() << std::endl;
    std::cout << "Year: " << date.getYear() << std::endl;

    // Validate if the date is valid
    if (date.isValidDate()) {
        std::cout << "Valid date" << std::endl;
    } else {
        std::cout << "Invalid date" << std::endl;
    }

    return 0;
}