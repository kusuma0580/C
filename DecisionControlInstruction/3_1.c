/*A five-digit number is entered through the keyboard. Write a 
program to obtain the reversed number and to determine whether 
the original and reversed numbers are equal or not. */

#include <stdio.h>

int main() {
    int original_number, reversed_number = 0, remainder, temp;

    printf("Enter a five-digit number: ");
    scanf("%d", &original_number);

    temp = original_number;

    while (temp != 0) {
        remainder = temp % 10;
        reversed_number = reversed_number * 10 + remainder;
        temp /= 10;
    }

    if (original_number == reversed_number) {
        printf("The original and reversed numbers are equal.\n");
    } else {
        printf("The original and reversed numbers are not equal.\n");
    }

    return 0;
}
