/* Write a program which performs the following tasks: 
Initialize an integer array of 10 elements in main( ) 
Pass the entire array to a function modify( ) 
In modify() multiply each element of array by 3
Return the control to main() and print the new array elements in main()


*/
#include <stdio.h>

void modify(int arr[], int size) {
    for (int i = 0; i < size; i++) {
        arr[i] *= 3;
    }
}

int main() {
    int arr[10] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};

    printf("Original array elements:\n");
    for (int i = 0; i < 10; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");
    modify(arr, 10);

    printf("Modified array elements (each multiplied by 3):\n");
    for (int i = 0; i < 10; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");

    return 0;
}
