/*Define a function that receives weight of a commodity in Kilograms 
and returns the equivalent weight in Grams, Tons and Pounds. Call 
this function from main( ) and print the results in main( ).*/
#include <stdio.h>

// Conversion constants
#define GRAMS_PER_KILOGRAM 1000.0
#define TONS_PER_KILOGRAM 0.001
#define POUNDS_PER_KILOGRAM 2.20462

void convertWeight(double kilograms, double *grams, double *tons, double *pounds) {
    *grams = kilograms * GRAMS_PER_KILOGRAM;
    *tons = kilograms * TONS_PER_KILOGRAM;
    *pounds = kilograms * POUNDS_PER_KILOGRAM;
}

int main() {
    double weightInKilograms;
    double weightInGrams, weightInTons, weightInPounds;

    printf("Enter weight in kilograms: ");
    scanf("%lf", &weightInKilograms);

    convertWeight(weightInKilograms, &weightInGrams, &weightInTons, &weightInPounds);

    printf("Weight in kilograms: %.2f\n", weightInKilograms);
    printf("Equivalent weight in grams: %.2f\n", weightInGrams);
    printf("Equivalent weight in tons: %.2f\n", weightInTons);
    printf("Equivalent weight in pounds: %.2f\n", weightInPounds);

    return 0;
}
