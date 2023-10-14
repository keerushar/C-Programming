// Question: Write a program to print the factorial of the number entered by the user.
#include <stdio.h>

int main() {
    int num, i;
    long long fact = 1;

    printf("Enter a number to find its factorial: ");
    scanf("%d", &num);

    if (num < 0) {
        printf("Factorial of a negative number does not exist.\n");
    } else {
        for (i = 1; i <= num; i++) {
            fact *= i;
        }
        printf("%d! = %lld\n", num, fact);
    }

    return 0;
}
