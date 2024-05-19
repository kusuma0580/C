/*Given three points (x1, y1), (x2, y2) and (x3, y3), write a program to 
check if the three points fall on one straight line. */

#include <stdio.h>

int main() {
    float x1, y1, x2, y2, x3, y3;
    float slope1, slope2;

    printf("Enter coordinates of first point (x1, y1): ");
    scanf("%f %f", &x1, &y1);
    printf("Enter coordinates of second point (x2, y2): ");
    scanf("%f %f", &x2, &y2);
    printf("Enter coordinates of third point (x3, y3): ");
    scanf("%f %f", &x3, &y3);

    slope1 = (y2 - y1) / (x2 - x1);
    slope2 = (y3 - y2) / (x3 - x2);

    if (slope1 == slope2) {
        printf("The three points fall on the same straight line.\n");
    } else {
        printf("The three points do not fall on the same straight line.\n");
    }

    return 0;
}
