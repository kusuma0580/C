/*A positive integer is entered through the keyboard. Write a function 
to obtain the prime factors of this number. 

For example, prime factors of 24 are 2, 2, 2 and 3, whereas prime 
factors of 35 are 5 and 7. 

*/

#include <stdio.h>

void prime_factors(int n) {
    int i;
    while (n % 2 == 0) {
        printf("%d ", 2);
        n = n / 2;
    }
    for (i = 3; i * i <= n; i = i + 2) {
        while (n % i == 0) {
            printf("%d ", i);
            n = n / i;
        }
    }
    if (n > 2)
        printf("%d ", n);
}

int main() {
    int num;
    printf("Enter a positive integer: ");
    scanf("%d", &num);
    printf("Prime factors of %d are: ", num);
    prime_factors(num);
    return 0;
}
