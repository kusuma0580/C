/*Write a program to check whether a triangle is valid or not, if three 
angles of the triangle are entered through the keyboard. A triangle 
is valid if the sum of all the three angles is equal to 180 degrees. */
#include <stdio.h>

int main() {
    int angle1, angle2, angle3;

    printf("Enter the three angles of the triangle: ");
    scanf("%d %d %d", &angle1, &angle2, &angle3);

    if (angle1 + angle2 + angle3 == 180) {
        printf("The triangle is valid.\n");
    } else {
        printf("The triangle is not valid.\n");
    }

    return 0;
}
