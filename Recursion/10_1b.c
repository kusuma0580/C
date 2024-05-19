#include <stdio.h>

void decimal_to_binary(int n) {
    if (n > 1) {
        decimal_to_binary(n / 2);
    }
    printf("%d", n % 2);
}

int main() {
    int num;
    printf("Enter a positive integer: ");
    scanf("%d", &num);
    printf("Binary format: ");
    decimal_to_binary(num);
    return 0;
}
