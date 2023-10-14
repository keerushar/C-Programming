// Question: Write a program to find prime numbers between two numbers given by the user.
#include <stdio.h>

int main() {
    int n1, n2, i, j, flag;

    printf("Enter two numbers (n1 and n2): ");
    scanf("%d %d", &n1, &n2);

    printf("The prime numbers from n1 to n2 are:\n");
    for (i = n1; i <= n2; i++) {
        flag = 1;
        for (j = 2; j < i; j++) {
            if (i % j == 0) {
                flag = 0;
                break;
            }
        }
        if (flag) {
            printf("%3d  ", i);
        }
    }

    return 0;
}
