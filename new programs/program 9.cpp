Program 9: Write a program that inputs radius from the user and calculates area and circumference of cube using formula Area = 4pr2 	Circumference = 4/3pr3.

#include <iostream>
#include <cmath>

const double PI = 3.14159;

int main() {
    double radius, area, circumference;

    // Input
    std::cout << "Enter the radius of the sphere: ";
    std::cin >> radius;

    // Calculate surface area and circumference
    area = 4 * PI * pow(radius, 2);  // Surface area = 4pr^2
    circumference = (4.0 / 3.0) * PI * pow(radius, 3);  // Circumference = 4/3pr^3

    // Output
    std::cout << "Surface area of the sphere: " << area << std::endl;
    std::cout << "Circumference of the sphere: " << circumference << std::endl;

    return 0;
}
