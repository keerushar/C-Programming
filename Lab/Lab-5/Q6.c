// Question: Write a program to calculate the sum of the digits of a number.
#include <stdio.h>

int main() {
    int number, n, digit, sum = 0;

    printf("Enter the number: ");
    scanf("%d", &number);

    n = number;

    do {
        digit = number % 10;
        number /= 10;
        sum += digit;
    } while (number != 0);

    printf("The sum of digits of %d is %d.\n", n, sum);

    return 0;
}
