Program 1: Write a program that prints a text of 4 lines consisting of characters, integer values and floating point value using printf statement.

#include <iostream>
#include <iomanip>  // Include the header for setprecision

int main() 
    char character = 'A';
    int integer = 42;
    float floatNum = 3.14;
     std::cout << "Line 1: This is a character: " << character << std::endl;
    std::cout << "Line 2: This is an integer: " << integer << std::endl;
    std::cout << std::fixed << std::setprecision(2);  // Set precision for all following floating-point numbers
    std::cout << "Line 3: This is a float: " << floatNum << std::endl;
    std::cout << "Line 4: We can use multiple values: character = " << character << ", integer = " << integer << ", float = " << floatNum << std::endl;

    return 0;
    }
