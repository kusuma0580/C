/* Write a program to receive an integer and find its octal equivalent.  
(Hint: To obtain octal equivalent of an integer, divide it continuously 
by 8 till dividend doesn’t become zero, then write the remainders 
obtained in reverse direction.)*/
#include <stdio.h>

int main() {
    int num, octal_num = 0, remainder, place = 1;

    printf("Enter an integer: ");
    scanf("%d", &num);

    while (num != 0) {
        remainder = num % 8;
        octal_num += remainder * place;
        place *= 10;
        num /= 8;
    }

    printf("Octal equivalent: %d\n", octal_num);

    return 0;
}
