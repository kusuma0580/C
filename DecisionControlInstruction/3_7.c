/*Given the coordinates (x, y) of center of a circle and its radius, write 
a program that will determine whether a point lies inside the circle, 
on the circle or outside the circle. (Hint: Use sqrt( ) and pow( ) 
functions) */

#include <stdio.h>
#include <math.h>

int main() {
    float x_c, y_c, radius, x, y, distance;

    printf("Enter coordinates of center of the circle (x_c, y_c): ");
    scanf("%f %f", &x_c, &y_c);
    printf("Enter radius of the circle: ");
    scanf("%f", &radius);

    printf("Enter coordinates of the point (x, y): ");
    scanf("%f %f", &x, &y);

    distance = sqrt(pow(x - x_c, 2) + pow(y - y_c, 2));

    if (distance < radius) {
        printf("The point lies inside the circle.\n");
    } else if (distance == radius) {
        printf("The point lies on the circle.\n");
    } else {
        printf("The point lies outside the circle.\n");
    }

    return 0;
}
