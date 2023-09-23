Program 33: Write a program that inputs starting and ending point from the user and displays all odd numbers in the given range using do-while loop.

#include <iostream>

int main() {
    int start, end;

    // Input
    std::cout << "Enter the starting point: ";
    std::cin >> start;

    std::cout << "Enter the ending point: ";
    std::cin >> end;

    std::cout << "Odd numbers in the given range: ";

    // Ensure start is odd
    if (start % 2 == 0)
        start++;

    // Display odd numbers using a do-while loop
    do {
        std::cout << start << " ";
        start += 2;  // Increment by 2 for odd numbers
    } while (start <= end);

    std::cout << std::endl;

    return 0;
}
