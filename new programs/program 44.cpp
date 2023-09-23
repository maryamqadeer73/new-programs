Program 44: Write a program that displays the following shape using while loop.

#include <iostream>

int main() {
    int rows = 5;

    // Display the shape
    int i = 1;
    while (i <= rows) {
        int j = 1;
        while (j <= i) {
            std::cout << "*";
            j++;
        }
        std::cout << std::endl;
        i++;
    }

    return 0;
}
