Program 26: Write a program that displays first five numbers and their sum using while loop.

#include <iostream>

int main() {
    int num = 1;
    int sum = 0;

    // Display first five numbers and calculate their sum
    while (num <= 5) {
        std::cout << num << " ";
        sum += num;
        num++;
    }

    std::cout << "\nSum of the first five numbers: " << sum << std::endl;

    return 0;
}
