/*) If a five-digit number is input through the keyboard, 
write a program to calculate the sum of its digits. (Hint: Use the modulus operator %)*/

#include <stdio.h>

int main() {
    int number, sum = 0;

    printf("Enter a five-digit number: ");
    scanf("%d", &number);

    while (number > 0) {
        int digit = number % 10;
        sum += digit;
        number /= 10;
    }

    printf("Sum of digits: %d\n", sum);

    return 0;
}
