program 63: Write a program that input a number and convert the number into binary, octal and hexadecimal and also display on the screen

#include <iostream>
#include <bitset>

int main() {
    int num;

    // Input
    std::cout << "Enter an integer: ";
    std::cin >> num;

    // Convert to binary, octal, and hexadecimal
    std::cout << "Binary: " << std::bitset<sizeof(num) * 8>(num) << std::endl;
    std::cout << "Octal: " << std::oct << num << std::endl;
    std::cout << "Hexadecimal: " << std::hex << num << std::endl;

    return 0;
}
