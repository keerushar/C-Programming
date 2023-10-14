// Question: Write a program to calculate compound interest amount (a) when principal (p), rate (r), time (t), and the number of times interest applied per time period (n) are given.
#include <stdio.h>
#include <math.h>

int main() {
    double principal, rate, time, n;
    
    // Input
    printf("Enter principal (P): ");
    scanf("%lf", &principal);
    printf("Enter rate (R): ");
    scanf("%lf", &rate);
    printf("Enter time (T) in years: ");
    scanf("%lf", &time);
    printf("Enter the number of times interest applied per time period (N): ");
    scanf("%lf", &n);
    
    // Calculate compound interest
    double a = principal * pow((1 + rate / n), (n * time)) - principal;
    
    // Output
    printf("Compound Interest Amount (A) = %.2lf\n", a);
    
    return 0;
}
