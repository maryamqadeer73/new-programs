Program 31: Write a program that displays the sum of following series using while loop.
1 + 1 / 2 + 1 / 4 + 1 / 6 +  . . . . . . . + 1 / 100.

#include <iostream>

int main() {
    int i = 1;
    double sum = 0.0;

    while (i <= 100) {
        sum += 1.0 / i;
        i += 2;  // Increment by 2 for odd denominators (1/1, 1/3, 1/5, ...)
    }

    std::cout << "Sum of the series: " << sum << std::endl;

    return 0;
}
