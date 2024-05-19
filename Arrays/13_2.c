/* If an array arr contains n elements, then write a program to check if 
arr[ 0 ] = arr[ n - 1 ], arr[ 1 ] = arr[ n - 2 ] and so on. */
#include <stdio.h>

int main() {
    int n;
    printf("Enter the number of elements in the array: ");
    scanf("%d", &n);
    
    int arr[n];
    
    printf("Enter %d elements into the array:\n", n);
    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }
    
    int similar = 1; 
    for (int i = 0; i < n / 2; i++) {
        if (arr[i] != arr[n - 1 - i]) {
            similar = 0;
            break;
        }
    }
    
    if (similar)
        printf("The array is symmetric.\n");
    else
        printf("The array is not symmetric.\n");
    
    return 0;
}
