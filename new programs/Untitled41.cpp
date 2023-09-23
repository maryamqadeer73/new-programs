Program 42: Write a program that calculates and displays the sum of following series using for loop.

#include <iostream>

int main() {
    int sum = 0;

    // Calculate and display the sum of the series
    for (int i = 1; i <= 10; i++) {
        sum += i;
    }

    std::cout << "Sum of the series: " << sum << std::endl;

    return 0;
}
