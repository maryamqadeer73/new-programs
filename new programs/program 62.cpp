program 62: Write a program that input a number and check whether it is armstrong number or not
hint:   153  =  (1)^3  + (5)^3 +  (3)^3

#include <iostream>
#include <cmath>

int countDigits(int num) {
    int count = 0;
    while (num != 0) {
        num /= 10;
        count++;
    }
    return count;
}

bool isArmstrong(int num) {
    int originalNum = num;
    int n = countDigits(num);
    int sum = 0;

    while (num != 0) {
        int digit = num % 10;
        sum += pow(digit, n);
        num /= 10;
    }

    return sum == originalNum;
}

int main() {
    int num;

    // Input
    std::cout << "Enter an integer: ";
    std::cin >> num;

    // Check if the number is an Armstrong number
    if (isArmstrong(num))
        std::cout << num << " is an Armstrong number." << std::endl;
    else
        std::cout << num << " is not an Armstrong number." << std::endl;

    return 0;
}

