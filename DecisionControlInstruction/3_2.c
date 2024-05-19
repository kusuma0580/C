/* If ages of Ram, Shyam and Ajay are input through the keyboard, 
write a program to determine the youngest of the three. */

#include <stdio.h>

int main() {
    int ram_age, shyam_age, ajay_age;

    printf("Enter age of Ram: ");
    scanf("%d", &ram_age);
    printf("Enter age of Shyam: ");
    scanf("%d", &shyam_age);
    printf("Enter age of Ajay: ");
    scanf("%d", &ajay_age);

    int youngest_age = ram_age;

    if (shyam_age < youngest_age) {
        youngest_age = shyam_age;
    }

    if (ajay_age < youngest_age) {
        youngest_age = ajay_age;
    }

    printf("The youngest person's age is: %d\n", youngest_age);

    return 0;
}
