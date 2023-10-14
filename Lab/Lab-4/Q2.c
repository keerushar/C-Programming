// Question: Write a program to print numbers from 100 to 10 which are exactly divided by 11 but not by 7.
#include <stdio.h>

int main() {
    int x;

    for (x = 100; x >= 10; x--) {
        if (x % 11 == 0 && x % 7 != 0) {
            printf("%d\n", x);
        }
    }

    return 0;
}
