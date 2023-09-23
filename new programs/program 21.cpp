Program 21: Write a program that inputs three numbers and displays the smallest number by using nested if condition.

#include <iostream>

int main() {
    double num1, num2, num3, smallest;

    // Input
    std::cout << "Enter three numbers: ";
    std::cin >> num1 >> num2 >> num3;

    // Determine the smallest number
    if (num1 <= num2) {
        if (num1 <= num3) {
            smallest = num1;
        } else {
            smallest = num3;
        }
    } else {
        if (num2 <= num3) {
            smallest = num2;
        } else {
            smallest = num3;
        }
    }

    // Output
    std::cout << "The smallest number is: " << smallest << std::endl;

    return 0;
}
