Program 27: Write a program that displays first five numbers with their squares using while loop.

#include <iostream>

int main() {
    int num = 1;

    // Display first five numbers and their squares
    while (num <= 5) {
        std::cout << "Number: " << num << ", Square: " << num * num << std::endl;
        num++;
    }

    return 0;
}
