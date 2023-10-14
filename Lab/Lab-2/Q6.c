// Question: Write a program to find the maximum between two numbers using conditional operators.
#include <stdio.h>

int main() {
    double num1, num2;
    
    // Input
    printf("Enter the first number: ");
    scanf("%lf", &num1);
    printf("Enter the second number: ");
    scanf("%lf", &num2);
    
    // Find the maximum using a conditional operator
    double max = (num1 > num2) ? num1 : num2;
    
    // Output
    printf("Maximum: %.2lf\n", max);
    
    return 0;
}
