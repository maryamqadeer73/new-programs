Program 38: Write a program that displays product of all odd numbers from 1 to 10 using for loop.

#include <iostream>

int main() {
    int product = 1;

    for (int i = 1; i <= 10; i += 2) {
        product *= i;
    }

    std::cout << "Product of all odd numbers from 1 to 10: " << product << std::endl;

    return 0;
}
