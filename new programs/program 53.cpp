Program 53: Write a program that displays the following shape using nested do-while loop.
4	4	4	4
3	3	3
2	2
1

#include <iostream>

int main() {
    int rows = 4;
    int num = rows;

    do {
        int col = 1;
        do {
            std::cout << num << "\t";
            col++;
        } while (col <= num);
        std::cout << std::endl;
        num--;
    } while (num >= 1);

    return 0;
}
