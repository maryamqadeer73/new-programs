Program 46: Write a program that calculates and displays the sum of the following series using for loop: 1 + 2x + 3x2 + 4x3 + 5x4
#include <iostream>

int main() {
    int sum = 0;
    int x = 2;

    // Calculate and display the sum of the series
    for (int i = 1; i <= 5; i++) {
        sum += i * x;
        x *= (i + 1);
    }

    std::cout << "Sum of the series: " << sum << std::endl;

    return 0;
}
Program 47: Write a program that calculates and displays the sum of the following series using for loop: 1/2 + 2/3 + 3/4 +. .  . . . . + 99/100

#include <iostream>

int main() {
    double sum = 0.0;

    // Calculate and display the sum of the series
    for (int i = 1; i <= 99; i++) {
        sum += static_cast<double>(i) / (i + 1);
    }

    std::cout << "Sum of the series: " << sum << std::endl;

    return 0;
}
