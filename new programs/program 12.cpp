Program 12: Write a program that finds area of triangle when three sides a, b and c of the triangle are given. It inputs values of a, b and c. Formula for the area of triangle is Area =  
where s = (a + b + c)/2.

#include <iostream>
#include <cmath>

int main() {
    double a, b, c, s, area;

    // Input
    std::cout << "Enter the lengths of the sides of the triangle (a, b, c): ";
    std::cin >> a >> b >> c;

    // Calculate s (semi-perimeter)
    s = (a + b + c) / 2;

    // Calculate area using Heron's formula
    area = sqrt(s * (s - a) * (s - b) * (s - c));

    // Output
    std::cout << "Area of the triangle: " << area << std::endl;

    return 0;

