/* Given a point (x, y), write a program to find out if it lies on X-axis, Y
axis or origin. */
#include <stdio.h>

int main() {
    float x, y;

    printf("Enter coordinates of the point (x, y): ");
    scanf("%f %f", &x, &y);

    if (x == 0 && y == 0) {
        printf("The point lies at the origin.\n");
    } else if (x == 0 && y != 0) {
        printf("The point lies on the Y-axis.\n");
    } else if (x != 0 && y == 0) {
        printf("The point lies on the X-axis.\n");
    } else {
        printf("The point does not lie on the X-axis, Y-axis, or at the origin.\n");
    }

    return 0;
}
