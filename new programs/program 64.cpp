program 64:  write a Program to print full pyramid using * and nested loop
        *
      * * *
    * * * * *
  * * * * * * *
* * * * * * * * *

#include <iostream>

int main() {
    int rows = 5;

    for (int i = 1; i <= rows; i++) {
        for (int j = 1; j <= rows - i; j++) {
            std::cout << " ";
        }
        for (int k = 1; k <= 2 * i - 1; k++) {
            std::cout << "*";
        }
        std::cout << std::endl;
    }

    return 0;
}

