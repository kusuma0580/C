/*Write a program to find the grace marks for a student using switch. 
The user should enter the class obtained by the student and the 
number of subjects he has failed in. Use the following logic: 
If the student gets first class and he fails in more than 3 
subjects, he does not get any grace. Otherwise, he gets a grace 
of 5 marks per subject. 

If the student gets second class and he fails in more than 2 
subjects, he does not get any grace. Otherwise, he gets a grace 
of 4 marks per subject. 

If the student gets third class and he fails in more than 1 
subject, then he does not get any grace. Otherwise, he gets a 
grace of 5 marks.*/

#include <stdio.h>

int main() {
    char class_obtained;
    int failed_subjects, grace_marks = 0;

    printf("Enter the class obtained (F for first class, S for second class, T for third class): ");
    scanf(" %c", &class_obtained);
    printf("Enter the number of subjects failed: ");
    scanf("%d", &failed_subjects);

    switch (class_obtained) {
        case 'F':
            if (failed_subjects > 3) {
                grace_marks = 0;
            } else {
                grace_marks = failed_subjects * 5;
            }
            break;
        case 'S':
            if (failed_subjects > 2) {
                grace_marks = 0;
            } else {
                grace_marks = failed_subjects * 4;
            }
            break;
        case 'T':
            if (failed_subjects > 1) {
                grace_marks = 0;
            } else {
                grace_marks = 5;
            }
            break;
        default:
            printf("Invalid class obtained.\n");
            return 1;
    }

    printf("Grace marks: %d\n", grace_marks);

    return 0;
}
