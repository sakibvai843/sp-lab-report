#include <stdio.h>
#define PI 3.14159265358979323846

int main() {
    int choice;
    float area, radius, length, width, base, height;

    // Display menu
    printf("Choose a shape to calculate the area:\n");
    printf("1. Circle\n");
    printf("2. Rectangle\n");
    printf("3. Triangle\n");
    printf("Enter your choice (1-3): ");
    scanf("%d", &choice);

    // Calculate area based on user choice
    switch(choice) {
        case 1:
            // Circle
            printf("Enter the radius of the circle: ");
            scanf("%f", &radius);
            area = PI * radius * radius;
            printf("The area of the circle is: %.2f\n", area);
            break;
        case 2:
            // Rectangle
            printf("Enter the length of the rectangle: ");
            scanf("%f", &length);
            printf("Enter the width of the rectangle: ");
            scanf("%f", &width);
            area = length * width;
            printf("The area of the rectangle is: %.2f\n", area);
            break;
        case 3:
            // Triangle
            printf("Enter the base of the triangle: ");
            scanf("%f", &base);
            printf("Enter the height of the triangle: ");
            scanf("%f", &height);
            area = 0.5 * base * height;
            printf("The area of the triangle is: %.2f\n", area);
            break;
        default:
            printf("Invalid choice.\n");
            break;
    }

    return 0;
}
