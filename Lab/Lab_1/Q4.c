// Question: Calculate the volume of a cuboid when given its length, breadth, and height.

#include <stdio.h>

int main() {
    float length, breadth, height, volume;

    // Input
    printf("Enter the length of the cuboid: ");
    scanf("%f", &length);
    printf("Enter the breadth of the cuboid: ");
    scanf("%f", &breadth);
    printf("Enter the height of the cuboid: ");
    scanf("%f", &height);

    // Calculate volume
    volume = length * breadth * height;

    // Output
    printf("Volume of the cuboid = %.2f\n", volume);

    return 0;
}
