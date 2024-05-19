
+/*In digital world colors are specified in Red-Green-Blue (RGB) format,
with values of R, G, B varying on an integer scale from 0 to 255.
In print publishing the colors are mentioned in Cyan-Magenta-Yellow- Black (CMYK) format,
with values of C, M, Y, and K varying on a real scale from 0.0 to 1.0. 

Write a program that converts RGB color to CMYK color as per the following formulae:

White=Max( Red / 255 ,Green/255,Blue/255) 
Cyan=( White - Red / 255)/ White 
Magenta=( White-Green/ 255 ) / White 
Yellow=( White-Blue/ 255) / White 
Black= 1 -White 

Note that if the RGB values are all 0, then the CMY values are all 0 and the K value is 1.
*/

#include <stdio.h>

int main() {
    int R, G, B;
    float C, M, Y, K, White;


    printf("Enter the values of Red, Green, and Blue (0 to 255): ");
    scanf("%d %d %d", &R, &G, &B);

    White = (R / 255.0 > G / 255.0) ? R / 255.0 : G / 255.0;
    White = (White > B / 255.0) ? White : B / 255.0;

    C = (White - R / 255.0) / White;
    M = (White - G / 255.0) / White;
    Y = (White - B / 255.0) / White;
    K = 1 - White;

    printf("CMYK values:\n");
    printf("Cyan: %.2f\n", C);
    printf("Magenta: %.2f\n", M);
    printf("Yellow: %.2f\n", Y);
    printf("Black: %.2f\n", K);

    return 0;
}
