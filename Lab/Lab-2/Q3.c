// Question: Write a program to separate a user-given three-digit number and display each separated digit in a new line.
#include <stdio.h>

int main() {
    int number;
    
    // Input
    printf("Enter a three-digit number: ");
    scanf("%d", &number);
    
    // Separate and output digits
    int digit1 = number / 100;
    int digit2 = (number / 10) % 10;
    int digit3 = number % 10;
    
    printf("Digit 1: %d\n", digit1);
    printf("Digit 2: %d\n", digit2);
    printf("Digit 3: %d\n", digit3);
    
    return 0;
}
