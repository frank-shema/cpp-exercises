#include <iostream>
#include <vector>

int minDistance(int num) {
    std::vector<int> factors;
    for (int i = 1; i <= num; i++) {
        if (num % i == 0) {
            factors.push_back(i);
        }
    }
    int minDist = num;
    for (int i = 0; i < factors.size() - 1; i++) {
        int dist = factors[i + 1] - factors[i];
        if (dist < minDist) {
            minDist = dist;
        }
    }
    return minDist;
}

int main() {
    int num;
    std::cout << "Enter a number: ";
    std::cin >> num;

    int smallestDistance = minDistance(num);
    std::cout << "The smallest positive distance between factors of " << num << " is: " << smallestDistance << std::endl;

    return 0;
}