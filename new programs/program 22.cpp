Program 22: Write a program that inputs three numbers and displays the maximum number by using logical operators.

#include <iostream>

int main() {
    double num1, num2, num3, maximum;

    // Input
    std::cout << "Enter three numbers: ";
    std::cin >> num1 >> num2 >> num3;

    // Determine the maximum number
    maximum = (num1 > num2 && num1 > num3) ? num1 : ((num2 > num3) ? num2 : num3);

    // Output
    std::cout << "The maximum number is: " << maximum << std::endl;

    return 0;
}
