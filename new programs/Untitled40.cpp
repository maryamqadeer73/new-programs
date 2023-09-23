Program 41: Write a program that inputs a positive integer number from the keyboard and displays it’s in reverse number. For example, the reverse of 345 is 543.

#include <iostream>

int main() {
    int number, reversedNumber = 0;

    // Input
    std::cout << "Enter a positive integer: ";
    std::cin >> number;

    // Reverse the number
    while (number != 0) {
        int remainder = number % 10;
        reversedNumber = reversedNumber * 10 + remainder;
        number /= 10;
    }

    // Output
    std::cout << "Reverse of the number: " << reversedNumber << std::endl;

    return 0;
}
