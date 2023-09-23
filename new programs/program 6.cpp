Program 6: write a program that converts a person’s height from inches to centimeters using the formula 2.54 * height.
#include <iostream>

int main() {
    float heightInInches, heightInCentimeters;

    // Input
    std::cout << "Enter height in inches: ";
    std::cin >> heightInInches;

    // Convert height to centimeters
    heightInCentimeters = 2.54 * heightInInches;

    // Output
    std::cout << "Height in centimeters: " << heightInCentimeters << " cm" << std::endl;

    return 0;
}
