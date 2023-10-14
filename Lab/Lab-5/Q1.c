// Question: Write a program to check if a five-digit number is a palindrome or not. (e.g., 12321, 25852, 45654)
#include <stdio.h>

int main() {
    int num, original, reverse = 0, digit;

    printf("Enter a five-digit number: ");
    scanf("%d", &num);
    original = num;

    while (num != 0) {
        digit = num % 10;
        reverse = reverse * 10 + digit;
        num /= 10;
    }

    if (original == reverse) {
        printf("%d is a palindrome.\n", original);
    } else {
        printf("%d is not a palindrome.\n", original);
    }

    return 0;
}
