Program 17: Write a program that inputs from user and determines whether it is positive, negative or zero.

#include <iostream>

int main() {
    int number;

    // Input
    std::cout << "Enter a number: ";
    std::cin >> number;

    // Determine whether the number is positive, negative, or zero
    if (number > 0) {
        std::cout << "The number is positive." << std::endl;
    } else if (number < 0) {
        std::cout << "The number is negative." << std::endl;
    } else {
        std::cout << "The number is zero." << std::endl;
    }

    return 0;
}
