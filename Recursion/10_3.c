/*There are three pegs labeled A, B and C. Four disks are placed on 
peg A. The bottom-most disk is largest, and disks go on decreasing 
in size with the topmost disk being smallest. The objective of the 
game is to move the disks from peg A to peg C, using peg B as an 
auxiliary peg. The rules of the game are as follows: 

(1) Only one disk may be moved at a time, and it must be the top 
disk on one of the pegs. 
(2) A larger disk should never be placed on the top of a smaller 
disk. 

Write a program to print out the sequence in which the disks should 
be moved such that all disks on peg A are finally transferred to peg 
C.*/
#include <stdio.h>
 
void towers(int, char, char, char);
 
int main()
{
    int num;
 
    printf("Enter the number of disks : ");
    scanf("%d", &num);
    printf("The sequence of moves involved in the Tower of Hanoi are :\n");
    towers(num, 'A', 'C', 'B');
    return 0;
}
void towers(int num, char frompeg, char topeg, char auxpeg)
{
    // Base Condition if no of disks are
    if (num == 1)
    {
        printf("\n Move disk 1 from peg %c to peg %c", frompeg, topeg);
        return;
    }
 
    // Recursively calling function twice
    towers(num - 1, frompeg, auxpeg, topeg);
    printf("\n Move disk %d from peg %c to peg %c", num, frompeg, topeg);
    towers(num - 1, auxpeg, topeg, frompeg);
}