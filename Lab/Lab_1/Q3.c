// Question: Calculate the simple interest (I) using Principal amount (P), time (T), and rate of Interest (R).

#include <stdio.h>

int main() {
    float principal, rate, time, interest;

    // Input
    printf("Enter the principal amount (P): ");
    scanf("%f", &principal);
    printf("Enter the rate of interest (R): ");
    scanf("%f", &rate);
    printf("Enter the time (T): ");
    scanf("%f", &time);

    // Calculate simple interest
    interest = (principal * rate * time) / 100.0;

    // Output
    printf("Simple Interest (I) = %.2f\n", interest);

    return 0;
}
