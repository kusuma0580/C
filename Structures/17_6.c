/*Define a function that compares two given dates. To store a date, 
use a structure that contains three members namely day, month 
and year. If the dates are equal the function should return 0, 
otherwise it should return 1. */

#include <stdio.h>

struct Date {
    int day;
    int month;
    int year;
};

int compareDates(struct Date date1, struct Date date2) {
    if (date1.year == date2.year && date1.month == date2.month && date1.day == date2.day)
        return 0; // Dates are equal
    else
        return 1; // Dates are not equal
}

int main() {
    struct Date date1, date2;

    printf("Enter the first date (DD MM YYYY): ");
    scanf("%d %d %d", &date1.day, &date1.month, &date1.year);

    printf("Enter the second date (DD MM YYYY): ");
    scanf("%d %d %d", &date2.day, &date2.month, &date2.year);

    int result = compareDates(date1, date2);
    printf("%d", result);

    return 0;
}
