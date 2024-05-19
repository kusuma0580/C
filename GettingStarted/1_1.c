/*Temperature of a city in Fahrenheit degrees is input through the 
keyboard. Write a program to convert this temperature into 
Centigrade degrees. */
#include <stdio.h>

int main() {
    float fahrenheit, celsius;

    printf("Enter temperature in Fahrenheit: ");
    scanf("%f", &fahrenheit);

    
    celsius = (fahrenheit - 32) * 5 / 9;

    printf("Temperature in Celsius: %.2f", celsius);

    return 0;
}
