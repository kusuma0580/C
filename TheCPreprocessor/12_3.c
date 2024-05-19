/*Write macro definitions with arguments for calculation of Simple 
Interest and Amount. Store these macro definitions in a file 
“interest.h”. Include this file in your program, and use the macro 
definitions for calculating Simple Interest and Amount.*/

#include <stdio.h>
#include "interest.h" // Include the interest.h file

int main() {
    float principal = 1000.0;
    float rate = 5.0;
    float time = 2.0;
    float interest = SIMPLE_INTEREST(principal, rate, time);
    float amount = AMOUNT(principal, interest);

    printf("Principal: %.2f\n", principal);
    printf("Rate: %.2f\n", rate);
    printf("Time: %.2f\n", time);
    printf("Simple Interest: %.2f\n", interest);
    printf("Amount: %.2f\n", amount);

    return 0;
}
