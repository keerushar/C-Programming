// Question: Convert temperature from degrees Celsius to degrees Fahrenheit.

#include <stdio.h>

int main() {
    float celsius, fahrenheit;

    // Input
    printf("Enter temperature in degrees Celsius: ");
    scanf("%f", &celsius);

    // Convert to Fahrenheit
    fahrenheit = 1.8 * celsius + 32.0;

    // Output
    printf("%.2f degrees Celsius is equal to %.2f degrees Fahrenheit\n", celsius, fahrenheit);

    return 0;
}
