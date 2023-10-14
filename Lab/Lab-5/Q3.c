// Question: Write a program to print all Armstrong numbers between any range of two numbers given by the user.
#include <stdio.h>
#include <math.h>

int main() {
    int n1, n2, num, sum, temp, remainder, digits;

    printf("Enter the range (n1 and n2): ");
    scanf("%d %d", &n1, &n2);

    printf("Armstrong numbers in the range are:\n");

    for (num = n1; num <= n2; num++) {
        temp = num;
        sum = 0;
        digits = (int) log10(temp) + 1;

        while (temp != 0) {
            remainder = temp % 10;
            sum += pow(remainder, digits);
            temp /= 10;
        }

        if (sum == num) {
            printf("%d  ", num);
        }
    }

    return 0;
}
