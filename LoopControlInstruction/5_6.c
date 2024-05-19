/*Write a program to find the range of a set of numbers entered 
through the keyboard. Range is the difference between the smallest 
and biggest number in the list. */

#include <stdio.h>

int main() {
    int count, num, smallest, largest;

    printf("Enter the count of numbers: ");
    scanf("%d", &count);

    printf("Enter number 1: ");
    scanf("%d", &num);
    smallest = num;
    largest = num;
    for (int i = 2; i <= count; ++i) {
        printf("Enter number %d: ", i);
        scanf("%d", &num);
        
        if (num < smallest) {
            smallest = num;
        }
        if (num > largest) {
            largest = num;
        }
    }
    int range = largest - smallest;
    printf("Range of the numbers: %d\n", range);

    return 0;
}
