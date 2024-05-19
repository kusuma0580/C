/*Write a program using pointers to find the smallest number in an 
array of 25 integers. */
#include <stdio.h>

int main() {
    int numbers[25];

    printf("Enter 25 integers:\n");
    for (int i = 0; i < 25; i++) {
        scanf("%d", &numbers[i]);
    }

    int *ptr = numbers;

    int smallest = *ptr;

    for (int i = 1; i < 25; i++) {
        if (*(ptr + i) < smallest) {
            smallest = *(ptr + i);
        }
    }

    printf("The smallest number in the array is: %d\n", smallest);

    return 0;
}
