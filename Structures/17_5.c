/*Suppose there is a structure called employee that holds 
information like employee code, name and date of joining. Write a 
program to create an array of structures and enter some data into 
it. Then ask the user to enter current date. Display the names of 
those employees whose tenure is greater than equal to 3 years. */
#include <stdio.h>

// Define a structure to store employee information
struct Employee {
    int code;
    char name[50];
    struct Date {
        int day;
        int month;
        int year;
    } joiningDate;
};

// Function to calculate tenure in years
int calculateTenureYears(struct Employee emp, int currentYear, int currentMonth, int currentDay) {
    int years = currentYear - emp.joiningDate.year;
    if (currentMonth < emp.joiningDate.month || (currentMonth == emp.joiningDate.month && currentDay < emp.joiningDate.day)) {
        years--;
    }
    return years;
}

int main() {
    int numEmployees;

    printf("Enter the number of employees: ");
    scanf("%d", &numEmployees);

    struct Employee employees[numEmployees];

    for (int i = 0; i < numEmployees; i++) {
        printf("Enter details for employee %d:\n", i + 1);
        printf("Employee Code: ");
        scanf("%d", &employees[i].code);
        printf("Name: ");
        scanf("%s", employees[i].name);
        printf("Date of Joining (DD MM YYYY): ");
        scanf("%d %d %d", &employees[i].joiningDate.day, &employees[i].joiningDate.month, &employees[i].joiningDate.year);
    }

    int currentDay, currentMonth, currentYear;
    printf("\nEnter the current date (DD MM YYYY): ");
    scanf("%d %d %d", &currentDay, &currentMonth, &currentYear);

    // Calculate tenure and display names of employees with tenure >= 3 years
    printf("\nEmployees with tenure >= 3 years:\n");
    for (int i = 0; i < numEmployees; i++) {
        int tenureYears = calculateTenureYears(employees[i], currentYear, currentMonth, currentDay);
        if (tenureYears >= 3) {
            printf("%s\n", employees[i].name);
        }
    }

    return 0;
}
