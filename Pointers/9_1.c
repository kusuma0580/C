/* Given three variables x, y, z, write a function to circularly shift their 
values to right. In other words, if x = 5, y = 8, z = 10, after circular 
shift y = 5, z = 8, x =10. Call the function with variables a, b, c to 
circularly shift values.*/
#include <stdio.h>

void circularShiftRight(int *x, int *y, int *z) {
    int temp = *z;
    *z = *y;
    *y = *x;
    *x = temp;
}

int main() {
    int a = 5, b = 8, c = 10;
    
    printf("Before shift: a = %d, b = %d, c = %d\n", a, b, c);
    
    circularShiftRight(&a, &b, &c);
    
    printf("After shift: a = %d, b = %d, c = %d\n", a, b, c);
    
    return 0;
}
