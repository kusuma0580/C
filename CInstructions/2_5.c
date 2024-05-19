/*If value of an angle is input through the keyboard, write a program to print all its Trigonometric ratios.*/

#include <stdio.h>
#include <math.h>

#define PI 3.14159265

int main() {
    double angle;
    double radian;

    printf("Enter the angle in degrees: ");
    scanf("%lf", &angle);

    radian = angle * PI / 180.0;

    double sine = sin(radian);
    double cosine = cos(radian);
    double tangent = tan(radian);
    double cosecant = 1 / sine;
    double secant = 1 / cosine;
    double cotangent = 1 / tangent;

    printf("Trigonometric ratios for angle %.2f degrees:\n", angle);
    printf("Sine: %.6f\n", sine);
    printf("Cosine: %.6f\n", cosine);
    printf("Tangent: %.6f\n", tangent);
    printf("Cosecant: %.6f\n", cosecant);
    printf("Secant: %.6f\n", secant);
    printf("Cotangent: %.6f\n", cotangent);

    return 0;
}
