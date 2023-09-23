Program 43: Write a program that finds sum of the squares of integers from 1 to n. Where n is appositive value entered by the user (i.e. sum = 12 + 22 + 32 + ….. + n2)

#include <iostream>

int main() {
    int n, sum = 0;

    // Input
    std::cout << "Enter a positive integer (n): ";
    std::cin >> n;

    // Calculate and display the sum of squares
    for (int i = 1; i <= n; i++) {
        sum += i * i;
    }

    std::cout << "Sum of squares from 1 to " << n << ": " << sum << std::endl;

    return 0;
}
