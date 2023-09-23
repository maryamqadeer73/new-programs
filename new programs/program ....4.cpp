Program 4: Write a program that inputs temperature from the using Celsius and converts it into Fahrenheit using the formula F = 9/5 * C + 32. 

#include <iostream>

int main() {
    float celsius, fahrenheit;

    // Input
    std::cout << "Enter temperature in Celsius: ";
    std::cin >> celsius;

    // Convert Celsius to Fahrenheit
    fahrenheit = (celsius * 9.0/5.0) + 32.0;

    // Output
    std::cout << "Temperature in Fahrenheit: " << fahrenheit << std::endl;

    return 0;
}
