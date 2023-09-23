Program 23: Write a program that inputs a character and displays whether it is vowel or consonant using switch statement.

#include <iostream>

int main() {
    char ch;

    // Input
    std::cout << "Enter a character: ";
    std::cin >> ch;

    // Convert to lowercase for easier comparison
    ch = tolower(ch);

    // Determine if the character is a vowel or consonant
    switch (ch) {
        case 'a':
        case 'e':
        case 'i':
        case 'o':
        case 'u':
            std::cout << "The character is a vowel." << std::endl;
            break;
        default:
            std::cout << "The character is a consonant." << std::endl;
            break;
    }

    return 0;
}
