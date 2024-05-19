/*The length and breadth of a rectangle and radius of a circle are 
input through the keyboard. Write a program to calculate the area 
and perimeter of the rectangle, and the area and circumference of 
the circle. */

#include <stdio.h>

int main() {
    float length, breadth, radius;
    float rectangle_area, rectangle_perimeter;
    float circle_area, circle_circumference;
    const float PI = 3.14159;

    printf("Enter length of rectangle: ");
    scanf("%f", &length);
    printf("Enter breadth of rectangle: ");
    scanf("%f", &breadth);

    
    printf("Enter radius of circle: ");
    scanf("%f", &radius);

    rectangle_area = length * breadth;
    rectangle_perimeter = 2 * (length + breadth);

    circle_area = PI * radius * radius;
    circle_circumference = 2 * PI * radius;

    printf("\nRectangle:\n");
    printf("Area: %.2f\n", rectangle_area);
    printf("Perimeter: %.2f\n", rectangle_perimeter);

    printf("\nCircle:\n");
    printf("Area: %.2f\n", circle_area);
    printf("Circumference: %.2f\n", circle_circumference);

    return 0;
}
