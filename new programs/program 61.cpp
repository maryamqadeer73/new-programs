Program 61: Write a program that inputs a number from the user and displays all prime numbers which are less than the input number using any loop.

#include <iostream>

bool isPrime(int num) {
    if (num <= 1)
        return false;

    for (int i = 2; i < num; i++) {
        if (num % i == 0)
            return false;
    }

    return true;
}

int main() {
    int limit;

    // Input
    std::cout << "Enter a number: ";
    std::cin >> limit;

    std::cout << "Prime numbers less than " << limit << ":" << std::endl;
    for (int i = 2; i < limit; i++) {
        if (isPrime(i))
            std::cout << i << " ";
    }
    std::cout << std::endl;

    return 0;
}
