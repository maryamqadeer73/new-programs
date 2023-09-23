Program 29: Write a program that inputs a number from the user and displays a table of that number using while loop.

#include <iostream>

int main() {
    int number, i = 1;

    // Input
    std::cout << "Enter a number: ";
    std::cin >> number;

    // Display the table of the number
    std::cout << "Table of " << number << ":" << std::endl;
    while (i <= 10) {
        std::cout << number << " x " << i << " = " << number * i << std::endl;
        i++;
    }

    return 0;
}
