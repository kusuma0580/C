/* A positive integer is entered through the keyboard, write a function 
to find the binary equivalent of this number:  
(1) Without using recursion 
(2) Using recursion */

#include <stdio.h>

void decimal_to_binary(int n) {
    int binary[32];
    int i = 0;
    while (n > 0) {
        binary[i] = n % 2;
        n = n / 2;
        i++;
    }
    for (int j = i - 1; j >= 0; j--) {
        printf("%d", binary[j]);
    }
}

int main() {
    int num;
    printf("Enter a positive integer: ");
    scanf("%d", &num);
    printf("Binary format: ");
    decimal_to_binary(num);
    return 0;
}
