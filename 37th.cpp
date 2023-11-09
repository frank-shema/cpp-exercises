#include <iostream>
#include <string>

std::string convertToRaindrops(int num) {
    std::string result = "";
    if (num % 3 == 0) result += "Pling";
    if (num % 5 == 0) result += "Plang";
    if (num % 7 == 0) result += "Plong";

    return result.empty() ? std::to_string(num) : result;
}

int main() {
    int num;
    std::cout << "Enter a positive number: ";
    std::cin >> num;

    std::string result = convertToRaindrops(num);
    std::cout << "Raindrop sounds: " << result << std::endl;

    return 0;
}
 