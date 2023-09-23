Program 49: Write a program that inputs two numbers and displays greatest common divisor of the numbers.

#include <iostream>

int gcd(int a, int b) {
    if (b == 0)
        return a;
    else
        return gcd(b, a % b);
}

int main() {
    int num1, num2;

    // Input
    std::cout << "Enter the first number: ";
    std::cin >> num1;

    std::cout << "Enter the second number: ";
    std::cin >> num2;

    // Calculate and display the greatest common divisor
    std::cout << "Greatest Common Divisor: " << gcd(num1, num2) << std::endl;

    return 0;
}
