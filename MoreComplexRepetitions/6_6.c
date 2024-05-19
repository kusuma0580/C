/* Population of a town today is 100000. The population has increased steadily at the rate of 10% per year for last 10 years. 
Write a program to determine the population at the end of each year in the last decade.*/
#include <stdio.h>

int main() {
    float population = 100000;

    printf("Year   Population\n");
    printf("------------------\n");

    for (int year = 1; year <= 10; year++) {
        population -= population * 0.1; 

        printf("%2d      %f\n", year, population);
    }

    return 0;
}
