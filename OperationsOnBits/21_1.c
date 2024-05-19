/*In an inter-college competition, various sports like cricket, 
basketball, football, hockey, lawn tennis, table tennis, carom and 
chess are played between different colleges. The information 
regarding the games won by a particular college is stored in bit 
numbers 0, 1, 2, 3, 4, 5, 6, 7 and 8 of an integer variable game. The 
college that wins in 5 or more than 5 games is awarded the 
Champion of Champions trophy. If a number representing the bit 
pattern mentioned above is entered through the keyboard, then 
write a program to find out whether the college won the Champion 
of the Champions trophy or not, along with the names of the games 
won by the college.*/
#include <stdio.h>

int main() {
    int game;
    
    // Prompt user to enter the number representing the games won by the college
    printf("Enter the number representing the games won by the college: ");
    scanf("%d", &game);
    int game2 = game;

    // Count the number of games won by checking set bits in the game variable
    int count = 0;
    if (game & (1 << 0)) {
        printf("Cricket\n");
        count++;
    }
    if (game & (1 << 1)) {
        printf("Basketball\n");
        count++;
    }
    if (game & (1 << 2)) {
        printf("Football\n");
        count++;
    }
    if (game & (1 << 3)) {
        printf("Hockey\n");
        count++;
    }
    if (game & (1 << 4)) {
        printf("Lawn Tennis\n");
        count++;
    }
    if (game & (1 << 5)) {
        printf("Table Tennis\n");
        count++;
    }
    if (game & (1 << 6)) {
        printf("Carom\n");
        count++;
    }
    if (game & (1 << 7)) {
        printf("Chess\n");
        count++;
    }

    // Determine whether the college wins the Champion of Champions trophy
    if (count >= 5) {
        printf("The college wins the Champion of Champions trophy!\n");
    } else {
        printf("The college does not win the Champion of Champions trophy.\n");
    }
    return 0;
}

