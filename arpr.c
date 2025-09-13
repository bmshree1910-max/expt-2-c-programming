#include <stdio.h>

int main() {
    float length, width, area, perimeter;

    // Input values
    printf("Enter length of rectangle: ");
    scanf("%f", &length);

    printf("Enter width of rectangle: ");
    scanf("%f", &width);

    // Calculations
    area = length * width;
    perimeter = 2 * (length + width);

    // Output results
    printf("Area of rectangle = %.2f\n", area);
    printf("Perimeter of rectangle = %.2f\n", perimeter);

    return 0;
}
