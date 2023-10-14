// Question: Write a program to read a character from the keyboard and display it.
#include <stdio.h>

int main() {
    char char_var;
    
    // Input
    printf("Enter a character: ");
    scanf(" %c", &char_var);
    
    // Output
    printf("You entered: %c\n", char_var);
    
    return 0;
}
