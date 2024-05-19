/*Write a program to print 24 hours of day with suitable suffixes like AM, PM, Noon and Midnight.*/
#include <stdio.h>

void printHours() {
    printf("Hours of the Day:\n");
    for (int i = 0; i < 24; i++) {
        if (i == 0) {
            printf("12 Midnight\n");
        } else if (i == 12) {
            printf("12 Noon\n");
        } else if (i < 12) {
            printf("%d AM\n", i);
        } else {
            printf("%d PM\n", i - 12);
        }
    }
}

int main() {
    printHours();
    return 0;
}
