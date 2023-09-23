Program 37: Write a program that displays alphabets from A to Z using for loop.

#include <iostream>

int main() {
    for (char c = 'A'; c <= 'Z'; c++) {
        std::cout << c << " ";
    }

    std::cout << std::endl;

    return 0;
}
