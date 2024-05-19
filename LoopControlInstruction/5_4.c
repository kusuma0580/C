/*Write a program to enter numbers till the user wants. At the end it 
should display the count of positive, negative and zeros entered. */

#include <stdio.h>

int main() {
    int num, positive_count = 0, negative_count = 0, zero_count = 0;
    char choice;

    do {
        printf("Enter a number:");
        scanf("%d", &num);

        if (num > 0) {
            positive_count++;
        } else if (num < 0) {
            negative_count++;
        } else {
            zero_count++;
        }

        printf("Do you want to enter another number? (y/n):");
        scanf(" %c", &choice);
    } while (choice == 'y' || choice == 'Y');
    printf("\nCounts:\n");
    printf("Positive numbers: %d\n", positive_count);
    printf("Negative numbers: %d\n", negative_count);
    printf("Zeroes: %d\n", zero_count);

    return 0;
}
