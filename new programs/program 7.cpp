Program 7: Write a program that inputs radius from the user and calculates area and circumference of circle using formula Area = pr2.

#include <iostream>
#include <cmath>

const double PI = 3.14159;

int main() {
    double radius, area, circumference;

    // Input
    std::cout << "Enter the radius of the circle: ";
    std::cin >> radius;

    // Calculate area and circumference
    area = PI * pow(radius, 2);  // Area = pr^2
    circumference = 2 * PI * radius;  // Circumference = 2pr

    // Output
    std::cout << "Area of the circle: " << area << std::endl;
    std::cout << "Circumference of the circle: " << circumference << std::endl;

    return 0;
}
