Program 24: Write a program that inputs two numbers and one arithmetic operator. It applies arithmetic operation on two numbers on the basis of operator entered by user using switch statement.

#include <iostream>

int main() {
    char operation;
    double num1, num2, result;

    // Input
    std::cout << "Enter two numbers: ";
    std::cin >> num1 >> num2;

    std::cout << "Enter an arithmetic operator (+, -, *, /): ";
    std::cin >> operation;

    // Apply the arithmetic operation based on the operator
    switch (operation) {
        case '+':
            result = num1 + num2;
            break;
        case '-':
            result = num1 - num2;
            break;
        case '*':
            result = num1 * num2;
            break;
        case '/':
            if (num2 != 0)
                result = num1 / num2;
            else {
                std::cout << "Cannot divide by zero." << std::endl;
                return 1;  // Exit with an error code
            }
            break;
        default:
            std::cout << "Invalid operator." << std::endl;
            return 1;  // Exit with an error code
    }

    // Output
    std::cout << "Result: " << result << std::endl;

    return 0;
}
