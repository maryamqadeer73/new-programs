Program 60: Write a program that inputs an integer and displays whether it is a prime number or not.

#include <iostream>
#include <cmath>

bool isPrime(int num) {
    if (num <= 1)
        return false;

    for (int i = 2; i <= sqrt(num); i++) {
        if (num % i == 0)
            return false;
    }

    return true;
}

int main() {
    int num;

    // Input
    std::cout << "Enter an integer: ";
    std::cin >> num;

    // Check if the number is prime
    if (isPrime(num))
        std::cout << num << " is a prime number." << std::endl;
    else
        std::cout << num << " is not a prime number." << std::endl;

    return 0;
}
