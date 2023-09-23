Program 10: Write a program that inputs a three digit number from the user and displays it in reverse order. For example if the user enter 123, it displays 321.

#include <iostream>

int main() {
    int number, reversedNumber = 0;

    // Input
    std::cout << "Enter a three-digit number: ";
    std::cin >> number;

    // Ensure the input is a three-digit number
    if (number < 100 || number > 999) {
        std::cout << "Please enter a valid three-digit number." << std::endl;
        return 1;  // Exit the program with an error code
    }

    // Reverse the number
    while (number > 0) {
        int digit = number % 10;
        reversedNumber = (reversedNumber * 10) + digit;
        number /= 10;
    }

    // Output
    std::cout << "The number in reverse order is: " << reversedNumber << std::endl;

    return 0;
}
