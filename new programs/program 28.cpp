Program 28: Write a program that inputs two numbers and exchange their values the program should display the values of variables before and after exchange.

#include <iostream>

int main() {
    int num1, num2, temp;

    // Input
    std::cout << "Enter the first number: ";
    std::cin >> num1;

    std::cout << "Enter the second number: ";
    std::cin >> num2;

    // Display values before exchange
    std::cout << "Values before exchange:" << std::endl;
    std::cout << "First number: " << num1 << std::endl;
    std::cout << "Second number: " << num2 << std::endl;

    // Exchange values
    temp = num1;
    num1 = num2;
    num2 = temp;

    // Display values after exchange
    std::cout << "\nValues after exchange:" << std::endl;
    std::cout << "First number: " << num1 << std::endl;
    std::cout << "Second number: " << num2 << std::endl;

    return 0;
}
