Program 16: Write a program that inputs salary. If salary is 20000 or more, it deducts 7% of salary. If salary is 10000 or more or more but less than 20000, it deducts 1000. If salary is less than 10000, it deducts nothing and then displays net salary.

#include <iostream>

int main() {
    double salary, netSalary;

    // Input
    std::cout << "Enter the salary: $";
    std::cin >> salary;

    // Calculate net salary based on conditions
    if (salary >= 20000) {
        netSalary = salary * 0.93;  // Deduct 7%
    } else if (salary >= 10000) {
        netSalary = salary - 1000;  // Deduct $1000
    } else {
        netSalary = salary;  // No deduction
    }

    // Output
    std::cout << "Net salary after deductions: $" << netSalary << std::endl;

    return 0;
}
