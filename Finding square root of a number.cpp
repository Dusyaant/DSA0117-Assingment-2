#include <iostream>
#include <cmath> // Included for the sqrt function

int main() {
    double num;
    std::cout << "Enter a number: ";
    std::cin >> num;

    if (num < 0) {
        std::cout << "Invalid Input: Negative number";
    } else if (num == 0) {
        std::cout << 0;
    } else {
        // Standard calculation for positive numbers
        double result = sqrt(num);
        std::cout << result;
    }

    return 0;
}
