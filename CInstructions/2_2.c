/*Write a program to receive Cartesian co-ordinates (x, y) of a point and convert them into polar co-ordinates (r, phi)

Hint: r = sqrt(x ^ 2 + y ^ 2) and phi = arctan(y / x)
*/

#include <stdio.h>
#include <math.h>

int main() {
    float x, y, r, phi;

    printf("Enter x coordinate: ");
    scanf("%f", &x);
    printf("Enter y coordinate: ");
    scanf("%f", &y);

    r = sqrt(x * x + y * y);
    phi = atan2(y, x); // atan2 calculates the arctangent of y/x, returning the result in radians

    // Convert radians to degrees
    phi = phi * 180 / M_PI;

    printf("Polar coordinates: (r=%.2f, phi=%.2f degrees)\n", r, phi);

    return 0;
}
