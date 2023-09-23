Program 2: Write a program that inputs name, age and address from the user and display it on the screen.

#include <iostream>
#include <string> // Include the string header to work with strings

int main() {
	 std::string name;
    int age;
    std::string address;

    // Input
    std::cout << "Please enter your name: ";
    std::getline(std::cin, name); // Allowing spaces in the name
    std::cout << "Please enter your age: ";
    std::cin >> age;
    std::cin.ignore(); // Ignore the newline character left in the input buffer
    std::cout << "Please enter your address: ";
    std::getline(std::cin, address); // Allowing spaces in the address

    // Output
    std::cout << "\nYou entered the following information:\n";
    std::cout << "Name: " << name << std::endl;
    std::cout << "Age: " << age << std::endl;
    std::cout << "Address: " << address << std::endl;

    return 0;
}
