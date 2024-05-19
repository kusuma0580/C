/*
The area of a triangle can be computed by the sine law when 2 sides of the triangle and the angle between them are known. Area = (1/2) ab sin (angle)

Given the following 6 triangular pieces of land, write a program to find their area and determine which is largest.


Plot No.     a      b      angle

1         137.4    80.9    0.78

2         155.2    92.62   0.89

3         149.3    97.93   1.35

4         160.0    100.25  9.00

5         155.6    68.95   1.25

6         149.7    120.0   1.75

*/
#include <stdio.h>
#include <math.h>

double computeArea(double a, double b, double angle) {
    return 0.5 * a * b * sin(angle);
}

int main() {
    double dimensions[][3] = {
        {137.4, 80.9, 0.78},
        {155.2, 92.62, 0.89},
        {149.3, 97.93, 1.35},
        {160.0, 100.25, 9.00},
        {155.6, 68.95, 1.25},
        {149.7, 120.0, 1.75}
    };

    double areas[6];

    for (int i = 0; i < 6; i++) {
        double a = dimensions[i][0];
        double b = dimensions[i][1];
        double angle = dimensions[i][2];
        areas[i] = computeArea(a, b, angle);
    }

    int largest_index = 0;
    for (int i = 1; i < 6; i++) {
        if (areas[i] > areas[largest_index]) {
            largest_index = i;
        }
    }
    printf("Areas of the triangular pieces of land:\n");
    for (int i = 0; i < 6; i++) {
        printf("Plot No. %d: %.2f square units\n", i + 1, areas[i]);
    }

    printf("\nThe largest piece of land is Plot No. %d with an area of %.2f square units.\n", largest_index + 1, areas[largest_index]);

    return 0;
}
