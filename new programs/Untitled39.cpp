Program 40: Write a program that inputs table number and length of table and then displays the table using for loop.

#include <iostream>

int main() {
    int tableNumber, tableLength;

    // Input
    std::cout << "Enter the table number: ";
    std::cin >> tableNumber;

    std::cout << "Enter the table length: ";
    std::cin >> tableLength;

    // Display the table
    std::cout << "Table of " << tableNumber << ":" << std::endl;
    for (int i = 1; i <= tableLength; i++) {
        std::cout << tableNumber << " x " << i << " = " << tableNumber * i << std::endl;
    }

    return 0;
}
