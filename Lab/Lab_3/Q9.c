// Question: Write a program to enter any number from the user. If the number is less than 25, check whether the entered number is odd or even and print the appropriate message. If the number is greater than or equal to 25, then square it and display the result.
#include <stdio.h>

int main() {
    int num;

    printf("Enter a number: ");
    scanf("%d", &num);

    if (num < 25) {
        if (num % 2 == 0) {
            printf("The entered number is even.\n");
        } else {
            printf("The entered number is odd.\n");
        }
    } else {
        int square = num * num;
        printf("The square of the number is: %d\n", square);
    }

    return 0;
}
