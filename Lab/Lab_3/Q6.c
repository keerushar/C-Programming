// Question: Write a program to input three sides of a triangle from the user and calculate the area of the triangle. Be sure to check that the sum of two other sides is always greater than the third side.
#include <stdio.h>
#include <math.h>

int main() {
    double a, b, c, s, area;

    printf("Enter the three sides of the triangle: ");
    scanf("%lf %lf %lf", &a, &b, &c);

    if (a + b > c && a + c > b && b + c > a) {
        s = (a + b + c) / 2;
        area = sqrt(s * (s - a) * (s - b) * (s - c));
        printf("The area of the triangle is: %.2lf\n", area);
    } else {
        printf("The given sides do not form a valid triangle.\n");
    }

    return 0;
}
