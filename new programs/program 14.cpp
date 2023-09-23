Program 14: Write a program that inputs a number and finds whether it is even or odd using if-else structure.

#include <iostream>

int main() {
    int number;

    // Input
    std::cout << "Enter a number: ";
    std::cin >> number;

    // Check if the number is even or odd
    if (number % 2 == 0) {
        std::cout << "The number is even." << std::endl;
    } else {
        std::cout << "The number is odd." << std::endl;
    }

    return 0;  // Return 0 to indicate successful program execution
}
