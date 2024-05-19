/*The X and Y coordinates of 10 different points are entered through 
the keyboard. Write a program to find the distance of last point 
from the first point (sum of distances between consecutive points). */
#include <stdio.h>
#include <math.h>

double distance(int x1, int y1, int x2, int y2) {
    return sqrt((x2 - x1)*(x2 - x1) + (y2 - y1)*(y2 - y1));
}

int main() {
    int x[10], y[10];
    
    printf("Enter the X and Y coordinates of 10 points:\n");
    for (int i = 0; i < 10; i++) {
        scanf("%d %d", &x[i], &y[i]);
    }

    double total_distance = 0.0;

    for (int i = 0; i < 9; i++) {
        total_distance += distance(x[i], y[i], x[i + 1], y[i + 1]);
    }

    printf("Total distance from the first point to the last point: %.2f\n", total_distance);

    return 0;
}
