#include <stdio.h>

int main() {
    int arr[10], sum = 0;
    
    // Reading 10 elements from the user
    printf("Enter 10 elements:\n");
    for (int i = 0; i < 10; i++) {
        scanf("%d", &arr[i]);
        sum += arr[i];  // Summing the elements
    }
    
    // Displaying the sum
    printf("Sum of the elements = %d\n", sum);
    
    return 0;
}
