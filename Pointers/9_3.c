/*Define a function to compute the distance between two points and 
use it to develop another function that will compute the area of the 
triangle whose vertices are A(x1, y1), B(x2, y2), and C(x3, y3). Use 
these functions to develop a function which returns a value 1 if the 
point (x, y) lines inside the triangle ABC, otherwise returns a value 
0. Would you get any advantage if you develop these functions to 
work on call be reference principle? */
#include <stdio.h>
#include <math.h>

double computeDistance(double *x1, double *y1, double *x2, double *y2) {
    return sqrt((*x2 - *x1) * (*x2 - *x1) + (*y2 - *y1) * (*y2 - *y1));
}

double computeTriangleArea(double *x1, double *y1, double *x2, double *y2, double *x3, double *y3) {
    return fabs((*x1 * (*y2 - *y3) + *x2 * (*y3 - *y1) + *x3 * (*y1 - *y2)) / 2.0);
}

int isPointInsideTriangle(double *x, double *y, double *x1, double *y1, double *x2, double *y2, double *x3, double *y3) {
 
    double areaABC = computeTriangleArea(x1, y1, x2, y2, x3, y3);
    double areaPAB = computeTriangleArea(x, y, x1, y1, x2, y2);
    double areaPBC = computeTriangleArea(x, y, x2, y2, x3, y3);
    double areaPCA = computeTriangleArea(x, y, x3, y3, x1, y1);
    
    return (areaABC == areaPAB + areaPBC + areaPCA);
}

int main() {
    double x1, y1, x2, y2, x3, y3;
    double x, y;

    printf("Enter the coordinates of vertex A (x1 y1): ");
    scanf("%lf %lf", &x1, &y1);
    printf("Enter the coordinates of vertex B (x2 y2): ");
    scanf("%lf %lf", &x2, &y2);
    printf("Enter the coordinates of vertex C (x3 y3): ");
    scanf("%lf %lf", &x3, &y3);

    printf("Enter the coordinates of the point (x y): ");
    scanf("%lf %lf", &x, &y);

    if (isPointInsideTriangle(&x, &y, &x1, &y1, &x2, &y2, &x3, &y3)) {
        printf("The point (%.2f, %.2f) lies inside the triangle ABC.\n", x, y);
    } else {
        printf("The point (%.2f, %.2f) does not lie inside the triangle ABC.\n", x, y);
    }

    return 0;
}
