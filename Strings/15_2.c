/*To uniquely identify a book a 10-digit ISBN (International Standard 
Book Number) is used.  The rightmost digit in ISBN is a checksum 
digit. This digit is determined from the other 9 digits using the 
condition that d1 + 2d2 + 3d3 + ... + 10d10 must be a multiple of 11 
(where di denotes the ith digit from the right). The checksum digit d1 
can be any value from 0 to 10: the ISBN convention is to use the 
value X to denote 10. Write a program that receives a 10-digit 
integer, computes the checksum, and reports whether the ISBN 
number is correct or not. */
#include <stdio.h>
#include <string.h>
#include <ctype.h>

int main() {
    char isbn[11]; 

    printf("Enter the 10-digit ISBN: ");
    scanf("%10s", isbn);
    if (strlen(isbn) != 10) {
        printf("Invalid ISBN length. ISBN must be exactly 10 characters long.\n");
        return 1;
    }

    int sum = 0;
    for (int i = 0; i < 10; i++) {
        int digit;
        
        if (i == 9 && (isbn[i] == 'X' || isbn[i] == 'x')) {
            digit = 10;
        } else if (isdigit(isbn[i])) {
            digit = isbn[i] - '0';
        } else {
            printf("Invalid character in ISBN. Only digits or 'X' are allowed.\n");
            return 1;
        }
        
        sum += (10 - i) * digit;
    }

    if (sum % 11 == 0) {
        printf("The ISBN is valid.\n");
    } else {
        printf("The ISBN is not valid.\n");
    }

    return 0;
}
