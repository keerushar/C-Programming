// Question: Write a program to print the following patterns using for loops.
#include <stdio.h>

int main() {
    int i, j;

    printf("Pattern 1:\n");
    for (i = 1; i <= 5; i++) {
        for (j = 1; j <= i; j++) {
            printf("%d ", i);
        }
        printf("\n");
    }

    printf("\nPattern 2:\n");
    for (i = 1; i <= 5; i++) {
        for (j = 1; j <= i; j++) {
            if ((i + j) % 2 == 0) {
                printf("1 ");
            } else {
                printf("0 ");
            }
        }
        printf("\n");
    }

    return 0;
}
