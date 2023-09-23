Program 25: Write a program that displays counting from 1 to 10 using while loop.

#include <iostream>

int main() {
    int count = 1;

    // Display counting from 1 to 10
    while (count <= 10) {
        std::cout << count << " ";
        count++;
    }

    std::cout << std::endl;

    return 0;
}
