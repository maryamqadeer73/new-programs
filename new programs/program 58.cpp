Program 58: Write a program that displays the following shape using nested for loop.
1
1	2
1	2	3
1	2	3	4
1	2	3	4	5

#include <iostream>

int main() {
    int rows = 5;

    for (int i = 1; i <= rows; i++) {
        for (int j = 1; j <= i; j++) {
            std::cout << j << "\t";
        }
        std::cout << std::endl;
    }

    return 0;
}
