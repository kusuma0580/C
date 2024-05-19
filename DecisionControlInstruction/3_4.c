/*Write a program to find the absolute value of a number entered 
through the keyboard. */
#include <stdio.h>

int main() {
    int number, absolute_value;

    // Input the number
    printf("Enter a number: ");
    scanf("%d", &number);

    // Calculate the absolute value
    if (number < 0) {
        absolute_value = -number;
    } else {
        absolute_value = number;
    }
    printf("the absolute number of %d is: %d", number, absolute_value);
    return 0;
}
