#include <iostream>
#include <string>

int isEvens(int n) {
    std::string numStr = std::to_string(n);
    for (char c : numStr) {
        if ((c - '0') % 2 != 0) {
            return 0;
        }
    }
    return 1;
}

int main() {
    int n;
    std::cout << "Enter an integer: ";
    std::cin >> n;

    int result = isEvens(n);
    std::cout << "The integer is an Evens number: " << result << std::endl;

    return 0;
}