// Question: Write a program to read numbers until the user enters zero. The program should display the count of positive and negative numbers separately.
#include <stdio.h>

int main() {
    float num;
    int count_p = 0, count_n = 0;

    printf("Enter numbers. Enter zero to display the result:\n");
    scanf("%f", &num);

    while (num != 0) {
        if (num > 0) {
            count_p++;
        } else {
            count_n++;
        }
        scanf("%f", &num);
    }

    printf("Count of positive numbers: %d\n", count_p);
    printf("Count of negative numbers: %d\n", count_n);

    return 0;
}
