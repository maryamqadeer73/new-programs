Program 56: Write a program that displays the following shape using nested for loop.
*****
  ****
    ***
      **
        *

#include <iostream>

int main() {
    int rows = 5;

    for (int i = 1; i <= rows; i++) {
        for (int k = 1; k < i; k++) {
            std::cout << " ";
        }
        for (int j = rows; j >= i; j--) {
            std::cout << "*";
        }
        std::cout << std::endl;
    }

    return 0;
}
