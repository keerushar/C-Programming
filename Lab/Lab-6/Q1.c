#include <stdio.h>

int main() {
    // Declare and initialize the integer array box1
    int box1[5] = {0, 11, 22, 33, 44};
    
    // Declare the float array box2
    float box2[5];
    
    // Prompt the user to input values for the float array box2
    printf("Enter 5 floating point numbers for box2:\n");
    for (int i = 0; i < 5; i++) {
        printf("box2[%d]: ", i);
        scanf("%f", &box2[i]);
    }
    
    // Display the contents of both arrays simultaneously
    printf("\nContents of both arrays:\n");
    printf("box1\tbox2\n");
    
    for (int i = 0; i < 5; i++) {
        printf("%d\t%.2f\n", box1[i], box2[i]);
    }
    
    return 0;
}
