/* When interest compounds q times per year at an annual rate of r% for n years, 
the principal p compounds to an amount a as per the following formula a = p * (1 + r / q) ^ (nq)

Write a program to read 10 sets of p, r, n & q and calculate the corresponding as.*/
#include <stdio.h>
#include <math.h>

int main() {
    float p, r, n, q, a;

    printf("Enter 10 sets of p, r, n, and q:\n");
    for (int i = 0; i < 10; i++) {
        printf("Set %d:\n", i + 1);
        printf("Enter principal (p): ");
        scanf("%f", &p);
        printf("Enter annual rate (r) in percentage: ");
        scanf("%f", &r);
        printf("Enter number of years (n): ");
        scanf("%f", &n);
        printf("Enter number of times interest compounds per year (q): ");
        scanf("%f", &q);

        r = r / 100;

        a = p * pow((1 + r / q), (n * q));

        printf("Amount after %0.2f years: %.2f\n", n, a);
    }

    return 0;
}
