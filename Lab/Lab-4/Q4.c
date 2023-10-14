// Question: Write a program to find the HCF and LCM of two given numbers.
#include <stdio.h>

int main() {
    int num1, num2, a, b, temp, hcf, lcm;

    printf("Enter two numbers: ");
    scanf("%d %d", &num1, &num2);

    a = num1;
    b = num2;

    // Calculate HCF using Euclidean algorithm
    while (b != 0) {
        temp = b;
        b = a % b;
        a = temp;
    }

    hcf = a;
    lcm = (num1 * num2) / hcf;

    printf("HCF: %d\n", hcf);
    printf("LCM: %d\n", lcm);

    return 0;
}
