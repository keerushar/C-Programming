// Question: Write a program to convert lower case characters given by the user to uppercase.
#include <stdio.h>

int main() {
    char c;
    
    // Input
    printf("Enter a lowercase character: ");
    scanf(" %c", &c);
    
    // Convert to uppercase
    c -= 32;
    
    // Output
    printf("Uppercase: %c\n", c);
    
    return 0;
}
