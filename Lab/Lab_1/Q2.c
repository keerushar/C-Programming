// Question: Calculate the area of a circle when given the radius.

#include <stdio.h>

int main() {
    float radius, area;

    // Input
    printf("Enter the radius of the circle: ");
    scanf("%f", &radius);

    // Calculate the area
    area = 3.14159 * radius * radius;

    // Output
    printf("Area of a circle with radius %.2f = %.2f\n", radius, area);

    return 0;
}
