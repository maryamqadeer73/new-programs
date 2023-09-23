Program 39: Write a program that inputs a number from the user and displays the factorial of that number using for loop.

#include <iostream>

int main() {
    int number;
    int factorial = 1;

    // Input
    std::cout << "Enter a number: ";
    std::cin >> number;

    for (int i = 1; i <= number; i++) {
        factorial *= i;
    }

    // Output
    std::cout << "Factorial of " << number << " = " << factorial << std::endl;

    return 0;
}
