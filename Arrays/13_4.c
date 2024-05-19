/*Implement the Insertion Sort algorithm shown in Figure 13.3 on a 
set of 25 numbers.*/
#include <stdio.h>

void insertionSort(int arr[], int n) {
    int i, key, j;
    for (i = 1; i < n; i++) {
        key = arr[i];
        j = i - 1;

        while (j >= 0 && arr[j] > key) {
            arr[j + 1] = arr[j];
            j = j - 1;
        }
        arr[j + 1] = key;
    }
}

int main() {
    int arr[25];
    
    printf("Enter 25 numbers:\n");
    for (int i = 0; i < 25; i++) {
        scanf("%d", &arr[i]);
    }
    insertionSort(arr, 25);

    printf("Sorted array: ");
    for (int i = 0; i < 25; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");

    return 0;
}
