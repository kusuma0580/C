/* Create a structure called student that can contain data given below: 
Roll number, Name, Department, Course, Year of joining 
Assume that there are not more than 450 students in the college.

(1) Write a function to print names of all students who joined in a 
particular year. 
(2) Write a function to print the data of a student whose roll 
number is received by the function.

 */
#include <stdio.h>
#include <string.h>

#define MAX_STUDENTS 450
struct Student {
    int rollNumber;
    char name[50];
    char department[50];
    char course[50];
    int yearOfJoining;
};

void printStudentsByYear(struct Student students[], int numStudents, int year) {
    printf("Students who joined in %d:\n", year);
    for (int i = 0; i < numStudents; i++) {
        if (students[i].yearOfJoining == year) {
            printf("%s\n", students[i].name);
        }
    }
}

void printStudentByRollNumber(struct Student students[], int numStudents, int rollNumber) {
    for (int i = 0; i < numStudents; i++) {
        if (students[i].rollNumber == rollNumber) {
            printf("Roll Number: %d\n", students[i].rollNumber);
            printf("Name: %s\n", students[i].name);
            printf("Department: %s\n", students[i].department);
            printf("Course: %s\n", students[i].course);
            printf("Year of Joining: %d\n", students[i].yearOfJoining);
            return;
        }
    }
    printf("Student with roll number %d not found.\n", rollNumber);
}

int main() {
    int numStudents;

    printf("Enter the number of students: ");
    scanf("%d", &numStudents);

    struct Student students[MAX_STUDENTS];

    for (int i = 0; i < numStudents; i++) {
        printf("Enter details for student %d:\n", i + 1);
        printf("Roll Number: ");
        scanf("%d", &students[i].rollNumber);
        printf("Name: ");
        scanf("%s", students[i].name);
        printf("Department: ");
        scanf("%s", students[i].department);
        printf("Course: ");
        scanf("%s", students[i].course);
        printf("Year of Joining: ");
        scanf("%d", &students[i].yearOfJoining);
    }

    int yearToSearch;
    printf("yearToSearch: ")
    scanf("%d", &yearToSearch)
    printStudentsByYear(students, numStudents, yearToSearch);

    int rollNumberToSearch; 
    printf("Roll Number: ")
    scanf("%d", &rollNumberToSearch)
    printStudentByRollNumber(students, numStudents, rollNumberToSearch);

    return 0;
}
/*
#include<stdio.h>
#include<string.h>
struct Student{
    int roolno;
    char name[50];
    char dept[50];
    char course[50];
    int yearofjoin;
};
void printStudent(int year, int totStudent, struct Student students[]){
    for(int i = 0; i < totStudent; i++){
        if(students[i].yearofjoin == year){
            printf("%d\n", students[i].roolno);
            printf("%s\n", students[i].name);
            printf("%s\n", students[i].dept);
            printf("%s\n", students[i].course);
            printf("%d\n\n",students[i].yearofjoin);
        }
    }
}
void printStudentData(int roolno, int totStudent, 
    struct Student students[])
    {
    for(int i = 0; i < totStudent; i++){
        if(students[i].roolno == roolno){
            printf("%d\n", students[i].roolno);
            printf("%s\n", students[i].name);
            printf("%s\n", students[i].dept);
            printf("%s\n", students[i].course);
            printf("%d\n\n",students[i].yearofjoin);
            break;
        }
    }
    printf("done");
}
int main(){
    struct Student students[200];
    int totStudents = 0;
    int regno = 0;
    int year = 0;
    int choice = 1;
    do{
        printf("roolno:");
        scanf("%d", &students[totStudents].roolno);
        printf("name:");
        scanf("%s", students[totStudents].name);
        
        printf("dept:");
        scanf("%s", students[totStudents].dept);
        printf("course:");
        scanf("%s",students[totStudents].course);
        printf("yearofjoin:");
        scanf("%d", &students[totStudents].yearofjoin);
        totStudents += 1;
        printf("1/0: ");
        scanf("%d",&choice);
    }while(choice == 1);
    printf("choose: 1-year, 2-rollno ");
    
    int choose=0;
    scanf("%d", &choose);
    switch(choose){
        case 1:
            printf("enter year");
            scanf("%d", &year);
            printStudent(year, totStudents, students);
            break;
        case 2:
            printf("enter regno ");
            scanf("%d", &regno);
            printStudentData(regno, totStudents, students);
            break;
    }
    return 0;
}*/
