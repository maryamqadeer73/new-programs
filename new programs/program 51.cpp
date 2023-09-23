Program 51: Write a program that displays the following block using nested for loop.
*****
*****
*****
*****
*****

#include <iostream>

int main() {
    for (int i = 1; i <= 5; i++) {
        for (int j = 1; j <= 5; j++) {
            std::cout << "*";
        }
        std::cout << std::endl;
    }

    return 0;
}
