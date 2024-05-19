/* Write a program to print out all Armstrong numbers between 1 and 
500. If sum of cubes of each digit of the number is equal to the 
number itself, then the number is called an Armstrong number. For 
example, 153 = ( 1 * 1 * 1 ) + ( 5 * 5 * 5 ) + ( 3 * 3 * 3 ). */


#include <stdio.h>
#include <math.h>

int main() {
    int number, originalNumber, remainder, result, n = 0;

    printf("Armstrong numbers between 1 and 500:\n");

    for (number = 1; number <= 500; ++number) {
        result = 0;
        originalNumber = number;
        while (originalNumber != 0) {
            originalNumber /= 10;
            ++n;
        }

        originalNumber = number;

        while (originalNumber != 0) {
            remainder = originalNumber % 10;
            result += pow(remainder, n);
            originalNumber /= 10;
        }

        if (result == number) {
            printf("%d\n", number);
        }
        n = 0; 
    }

    return 0;
}
