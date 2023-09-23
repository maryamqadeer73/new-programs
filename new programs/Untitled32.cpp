Program 32: Write a program that displays sum of following series using do-while loop.

#include <iostream>

int main() {
    int i = 1;
    double sum = 0.0;

    do {
        sum += 1.0 / i;
        i += 2;  // Increment by 2 for odd denominators (1/1, 1/3, 1/5, ...)
    } while (i <= 100);

    std::cout << "Sum of the series: " << sum << std::endl;

    return 0;

