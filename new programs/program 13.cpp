Program 13: Write a program that inputs temperature in Fahrenheit and convert it into Celsius.

#include <iostream>

int main() {
    double fahrenheit, celsius;

    // Input
    std::cout << "Enter temperature in Fahrenheit: ";
    std::cin >> fahrenheit;

    // Convert Fahrenheit to Celsius
    celsius = (fahrenheit - 32) * 5.0 / 9.0;

    // Output
    std::cout << "Temperature in Celsius: " << celsius << " degrees Celsius" << std::endl;

    return 0;
}
