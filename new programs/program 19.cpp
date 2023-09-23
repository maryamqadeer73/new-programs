Program 18: Write a program that inputs test score of a student and displays his grade on the following scale
Test Score		Grade
>=90			A
80-90			B
70-79			C
60-69			D
Below 50		 F

#include <iostream>

int main() {
    int testScore;

    // Input
    std::cout << "Enter the test score: ";
    std::cin >> testScore;

    // Determine the grade based on the test score
    char grade;

    if (testScore >= 90) {
        grade = 'A';
    } else if (testScore >= 80) {
        grade = 'B';
    } else if (testScore >= 70) {
        grade = 'C';
    } else if (testScore >= 60) {
        grade = 'D';
    } else {
        grade = 'F';
    }

    // Output
    std::cout << "Grade: " << grade << std::endl;

    return 0;
}
