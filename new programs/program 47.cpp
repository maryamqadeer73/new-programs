Program 48: Write a program that inputs five values and displays their squares and cubes using loop.

#include <iostream>

int main() {
    int values[5];

    // Input
    std::cout << "Enter five values:" << std::endl;
    for (int i = 0; i < 5; i++) {
        std::cout << "Value " << i + 1 << ": ";
        std::cin >> values[i];
    }

    // Display squares and cubes
    std::cout << "Value\tSquare\tCube" << std::endl;
    for (int i = 0; i < 5; i++) {
        std::cout << values[i] << "\t" << values[i] * values[i] << "\t" << values[i] * values[i] * values[i] << std::endl;
    }

    return 0;
}
