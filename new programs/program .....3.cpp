Program 3: Write a program that inputs base height from the user and calculates area of a triangle by using the formula Area = ½ * Base *Height.

#include <iostream>

int main() {
    float base, height, area;

    // Input
    std::cout << "Enter the base of the triangle: ";
    std::cin >> base;

    std::cout << "Enter the height of the triangle: ";
    std::cin >> height;

    // Calculate the area
    area = 0.5 * base * height;

    // Output
    std::cout << "The area of the triangle is: " << area << std::endl;

    return 0;
}
