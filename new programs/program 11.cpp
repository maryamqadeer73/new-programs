Program 11: Write a program that inputs miles from the user and converts miles into kilometers. One mile is equal to 1.609km.

#include <iostream>

int main() {
    double miles, kilometers;

    // Input
    std::cout << "Enter distance in miles: ";
    std::cin >> miles;

    // Convert miles to kilometers
    kilometers = miles * 1.609;  // 1 mile = 1.609 kilometers

    // Output
    std::cout << "Distance in kilometers: " << kilometers << " km" << std::endl;

    return 0;
}
