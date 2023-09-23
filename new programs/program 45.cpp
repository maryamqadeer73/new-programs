Program 45: Write a program that calculates and displays sum of the following series using for loop: 1! + 2! + 3! + 4! + 5! Where “!” represents factorial of the number.

#include <iostream>

int factorial(int num) {
    if (num == 0 || num == 1)
        return 1;
    else
        return num * factorial(num - 1);
}

int main() {
    int sum = 0;

    // Calculate and display the sum of factorials
    for (int i = 1; i <= 5; i++) {
        sum += factorial(i);
    }

    std::cout << "Sum of factorials: " << sum << std::endl;

    return 0;
}
