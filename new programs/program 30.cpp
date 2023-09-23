Program 30: Write a program that inputs a number from the user and displays the factorial of that number using while loop.

#include <iostream>

int main() {
    int number, factorial = 1;

    // Input
    std::cout << "Enter a number: ";
    std::cin >> number;

    int i = 1;
    while (i <= number) {
        factorial *= i;
        i++;
    }

    // Output
    std::cout << "Factorial of " << number << " = " << factorial << std::endl;

    return 0;
}
