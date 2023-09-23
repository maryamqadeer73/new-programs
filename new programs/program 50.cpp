Program 50: Write a program that displays the following shape using nested loops. The outr loop should be for loop and inner loop should be while loop.
*******
******
*****
****
***
**
*

#include <iostream>

int main() {
    for (int i = 7; i >= 1; i--) {
        int j = 1;
        while (j <= i) {
            std::cout << "*";
            j++;
        }
        std::cout << std::endl;
    }

    return 0;
}
