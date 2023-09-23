Program 15: Write a program that inputs salary and grade. It adds 50% bonus if grade is greater than 15. It adds 25% bonus if grade is 15 or less and then displays the salary.

#include <iostream>

int main() {
    double salary;
    int grade;

    // Input
    std::cout << "Enter the salary: $";
    std::cin >> salary;

    std::cout << "Enter the grade: ";
    std::cin >> grade;

    // Calculate bonus based on grade
    double bonus = 0.0;

    if (grade > 15) {
        bonus = 0.50 * salary;  // 50% bonus for grade > 15
    } else if (grade <= 15) {
        bonus = 0.25 * salary;  // 25% bonus for grade <= 15
    }

    // Calculate total salary
    double totalSalary = salary + bonus;

    // Output
    std::cout << "Total salary after bonus: $" << totalSalary << std::endl;

    return 0;
}
