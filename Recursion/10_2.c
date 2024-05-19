/*Write a recursive function to obtain the sum of first 25 natural 
numbers. */
#include <stdio.h>

int sum_of_first_natural_numbers(int n) {
    if (n == 1)
        return 1;
    else
        return n + sum_of_first_natural_numbers(n - 1);
}

int main() {
    int n = 25;
    int sum = sum_of_first_natural_numbers(n);
    printf("Sum of first %d natural numbers: %d", n, sum);
    return 0;
}
