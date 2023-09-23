Program 5: Write a program that inputs 4 numbers and calculates the sum, average, and product of all the numbers

#include <iostream>

int main() {
    float num1, num2, num3, num4;
    float sum, average, product;

    // Input
    std::cout << "Enter the first number: ";
    std::cin >> num1;

    std::cout << "Enter the second number: ";
    std::cin >> num2;

    std::cout << "Enter the third number: ";
    std::cin >> num3;

    std::cout << "Enter the fourth number: ";
    std::cin >> num4;

    // Calculate sum, average, and product
    sum = num1 + num2 + num3 + num4;
    average = sum / 4.0;
    product = num1 * num2 * num3 * num4;

    // Output
    std::cout << "Sum of the numbers: " << sum << std::endl;
    std::cout << "Average of the numbers: " << average << std::endl;
    std::cout << "Product of the numbers: " << product << std::endl;

    return 0;
}
