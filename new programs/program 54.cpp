Program 54: Write a program that displays the following shape using nested for loop.
*
**
***
****
*****

#include <iostream>

int main() {
    int rows = 5;

    for (int i = 1; i <= rows; i++) {
        for (int j = 1; j <= i; j++) {
            std::cout << "*";
        }
        std::cout << std::endl;
    }

    return 0;
}
