// Question: Write a program to display the first 15 terms of the series: -12, -14, -18, -26, -42.
#include <stdio.h>
#include <math.h>

int main() {
    int i;
    double a = -12;

    for (i = 1; i <= 15; i++) {
        printf("%.2lf ", a);
        a = a - pow(2, i);
    }

    return 0;
}
