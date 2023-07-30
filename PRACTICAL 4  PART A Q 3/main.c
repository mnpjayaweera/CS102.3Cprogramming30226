#include <stdio.h>
#include <math.h>

#define PI 3.14159265359

int main() {
    int choice;
    double radius, result;

    printf("Welcome to the Circle and Sphere Calculator!\n");
    printf("1. Calculate the circumference of a circle\n");
    printf("2. Calculate the area of a circle\n");
    printf("3. Calculate the volume of a sphere\n");
    printf("Enter your choice (1/2/3): ");
    scanf("%d", &choice);

    switch (choice) {
        case 1:
            printf("Enter the radius of the circle: ");
            scanf("%lf", &radius);
            result = 2 * PI * radius;
            printf("The circumference of the circle is: %.2f\n", result);
            break;

        case 2:
            printf("Enter the radius of the circle: ");
            scanf("%lf", &radius);
            result = PI * pow(radius, 2);
            printf("The area of the circle is: %.2f\n", result);
            break;

        case 3:
            printf("Enter the radius of the sphere: ");
            scanf("%lf", &radius);
            result = (4.0 / 3.0) * PI * pow(radius, 3);
            printf("The volume of the sphere is: %.2f\n", result);
            break;

        default:
            printf("Invalid choice. Please select 1, 2, or 3.\n");
            return 1;
    }

    return 0;
}
