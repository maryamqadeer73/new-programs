Program 34: Write a program that inputs two numbers from the user and displays the result of first number raise to the power of second number using do-while loop.

#include <iostream>

int main() {
    int base, exponent, result = 1;

    // Input
    std::cout << "Enter the base number: ";
    std::cin >> base;

    std::cout << "Enter the exponent: ";
    std::cin >> exponent;

    // Calculate the result using a do-while loop
    do {
        result *= base;
        exponent--;
    } while (exponent > 0);

    std::cout << "Result: " << result << std::endl;

    return 0;
}
