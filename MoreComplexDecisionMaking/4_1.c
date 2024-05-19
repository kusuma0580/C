/* If the lengths of three sides of a triangle are entered through the keyboard, 
write a program to check whether the triangle is an isosceles, an equilateral, a scalene or a right-angled triangle.*/

#include <stdio.h>

int main() {
    float side1, side2, side3;

    printf("Enter the lengths of three sides of the triangle: ");
    scanf("%f %f %f", &side1, &side2, &side3);

    if (side1 == side2 && side2 == side3) {
        printf("The triangle is an equilateral triangle.\n");
    }
    else if (side1 == side2 || side1 == side3 || side2 == side3) {
        printf("The triangle is an isosceles triangle.\n");
    }
    else if (side1 * side1 + side2 * side2 == side3 * side3 ||
             side1 * side1 + side3 * side3 == side2 * side2 ||
             side2 * side2 + side3 * side3 == side1 * side1) {
        printf("The triangle is a right-angled triangle.\n");
    }
    else {
        printf("The triangle is a scalene triangle.\n");
    }

    return 0;
}
