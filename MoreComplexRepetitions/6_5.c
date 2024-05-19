/*Write a program to generate all Pythagorean Triplets with side length less than or equal to 30.*/
#include <stdio.h>

int main() {
    printf("Pythagorean Triplets with side lengths less than or equal to 30:\n");
    
    for (int a = 1; a <= 30; a++) {
        for (int b = a; b <= 30; b++) {
            for (int c = b; c <= 30; c++) {
                if (a * a + b * b == c * c) {
                    printf("%d, %d, %d\n", a, b, c);
                }
            }
        }
    }

    return 0;
}
