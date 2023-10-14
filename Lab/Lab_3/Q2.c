// Question: Write a program to input a character from the user and convert it to uppercase if entered in small and to small letter if it is given in capital letter.
#include <stdio.h>

int main() {
    char ch;

    printf("Enter a character: ");
    scanf(" %c", &ch);

    if (ch >= 'a' && ch <= 'z') {
        ch = ch - 32; // Convert to uppercase
    } else if (ch >= 'A' && ch <= 'Z') {
        ch = ch + 32; // Convert to lowercase
    }

    printf("Converted character: %c\n", ch);

    return 0;
}
