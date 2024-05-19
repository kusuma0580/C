/* A record contains name of cricketer, his age, number of test 
matches that he has played and the average runs that he has scored. Create an array of structures to hold records of 20 such 
cricketers and then write a program to read these records and 
arrange them in ascending order by average runs. Use the qsort( ) 
standard library function. 
*/

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define MAX_CRICKETERS 20

struct Cricketer {
    char name[50];
    int age;
    int testMatches;
    float averageRuns;
};

int compareCricketers(const void *a, const void *b) {
    const struct Cricketer *cricketerA = (const struct Cricketer *)a;
    const struct Cricketer *cricketerB = (const struct Cricketer *)b;
    if (cricketerA->averageRuns < cricketerB->averageRuns) return -1;
    if (cricketerA->averageRuns > cricketerB->averageRuns) return 1;
    return 0;
}

int main() {
    struct Cricketer cricketers[MAX_CRICKETERS];

    printf("Enter details of cricketers:\n");
    for (int i = 0; i < MAX_CRICKETERS; i++) {
        printf("Cricketer %d:\n", i + 1);
        printf("Name: ");
        scanf("%s", cricketers[i].name);
        printf("Age: ");
        scanf("%d", &cricketers[i].age);
        printf("Number of Test Matches: ");
        scanf("%d", &cricketers[i].testMatches);
        printf("Average Runs: ");
        scanf("%f", &cricketers[i].averageRuns);
    }

    // Sort cricketers by average runs in ascending order
    qsort(cricketers, MAX_CRICKETERS, sizeof(struct Cricketer), compareCricketers);

    // Print the sorted list of cricketers
    printf("\nCricketers sorted by average runs in ascending order:\n");
    for (int i = 0; i < MAX_CRICKETERS; i++) {
        printf("Name: %s, Age: %d, Test Matches: %d, Average Runs: %.2f\n", cricketers[i].name, cricketers[i].age, cricketers[i].testMatches, cricketers[i].averageRuns);
    }

    return 0;
}
