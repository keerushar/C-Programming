// Question: Write a program to calculate the value of the sine series, by summing the first n terms of Maclaurin's series.
#include <stdio.h>
#include <math.h>

int main() {
    double x, sum = 0;
    int n, i;

    printf("Enter the value of x (in radians): ");
    scanf("%lf", &x);

    printf("Enter the number of terms (n): ");
    scanf("%d", &n);

    for (i = 1; i <= n; i++) {
        if (i % 2 == 1) {
            sum += pow(x, 2 * i - 1) / tgamma(2 * i);
        } else {
            sum -= pow(x, 2 * i - 1) / tgamma(2 * i);
        }
    }

    printf("Sine value for x = %.2lf: %.4lf\n", x, sum);

    return 0;
}
