// Question: Write a program to print the Fibonacci series up to the mth term.
#include <stdio.h>

int main() {
    int m, a = 0, b = 1, c, i;

    printf("How many terms of the Fibonacci sequence: ");
    scanf("%d", &m);

    // Printing the first two terms
    printf("1 ");
    printf("1 ");

    for (i = 3; i <= m; i++) {
        c = a + b;
        printf("%d ", c);
        a = b;
        b = c;
    }

    return 0;
}
