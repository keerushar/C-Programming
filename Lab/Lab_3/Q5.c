// Question: Write a program to solve the quadratic equation Ax^2 + Bx + C = 0. Take coefficients A, B, and C from the user and check that they do not result in imaginary roots. If they do, print an appropriate error message and exit from the program.
#include <stdio.h>
#include <conio.h>
#include <math.h>

int main(void) {
    float a, b, c, desc, x1, x2, real, img;

    printf("Enter the coefficients of Ax^2 + Bx + C = 0: ");
    scanf("%f %f %f", &a, &b, &c);

    if (a != 0) {
        desc = b * b - 4 * a * c;
        if (desc >= 0) {
            x1 = (-b + sqrt(desc)) / (2 * a);
            x2 = (-b - sqrt(desc)) / (2 * a);
            printf("The real roots are: %.2f, %.2f\n", x1, x2);
        } else {
            real = -b / (2 * a);
            img = sqrt(-desc) / (2 * a);
            img = fabs(img);
            printf("The imaginary roots are: %.2f + i%.2f, %.2f - i%.2f\n", real, img, real, img);
        }
    } else {
        printf("The equation is not quadratic. Try again.\n");
    }

    return 0;
}
