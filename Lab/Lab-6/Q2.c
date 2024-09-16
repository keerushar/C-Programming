#include <stdio.h>

int main() {
    // Declare and initialize the character array
    char array[5] = {'A', 'R', 'R', 'A', 'Y'};
    
    // Output the array in the specified format
    for (int i = 0; i < 5; i++) {
        printf("array[%d]= %c\n", i, array[i]);
    }
    
    return 0;
}
