Program 55: Write a program that displays the following shape using nested for loop.
0
01
012
0123
01234
012345

#include <iostream>

int main() {
    int rows = 6;

    for (int i = 0; i < rows; i++) {
        for (int j = 0; j <= i; j++) {
            std::cout << j;
        }
        std::cout << std::endl;
    }

    return 0;
}
