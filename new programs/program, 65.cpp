Program 65: write a program display Armstrong number between two intervals.

#include <iostream>
#include <cmath>

bool isArmstrong(int num) {
    int originalNum = num;
    int n = floor(log10(num)) + 1;
    int sum = 0;

    while (num != 0) {
        int digit = num % 10;
        sum += pow(digit, n);
        num /= 10;
    }

    return sum == originalNum;
}

int main() {
    int start, end;

    // Input
    std::cout << "Enter the starting number: ";
    std::cin >> start;

    std::cout << "Enter the ending number: ";
    std::cin >> end;

    std::cout << "Armstrong numbers between " << start << " and " << end << ":" << std::endl;
    for (int i = start; i <= end; i++) {
        if (isArmstrong(i))
            std::cout << i << " ";
    }
    std::cout << std::endl;

    return 0;
}




