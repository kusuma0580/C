/*In order to save disk space, information about student is stored in 
an integer variable. Bit numbers 0 to 3 indicate whether the student 
is a Ist year, IInd year, IIIrd year or IVth year student respectively. Bits 4 
to 7 indicate whether the student's stream is Mechanical, Chemical, 
Electronics or CS. Rest of the bits store room number. Such data for 
4 students is stored in the following array: 
int data[   ] = {  273, 548, 786, 1096 } ; 
Write a program that uses this data and displays the information 
about the student. */
#include<stdio.h> 
#define BV( x ) 1 << x  
int main( ) 
{ 
    int i, num, roomnum ; 
    unsigned short int data[ ] = { 273, 548, 786, 1096 } ;  
    for ( i = 0 ; i < 4 ; i++ ) 
    { 
        num = data[ i ] ; 
        if ( ( num & BV( 0 ) ) == BV( 0 ) )  
            printf ( "Year: First year\n" ) ; 
        if ( ( num & BV( 1 ) ) == BV( 1 ) )  
            printf ( "Year: Second year\n" ) ; 
        if ( ( num & BV( 2 ) ) == BV( 2 ) )  
            printf ( "Year: Third year\n" ) ; 
        if ( ( num & BV( 3 ) ) == BV( 3 ) )  
            printf ( "Year: Fourth year\n" ) ; 
        if ( ( num & BV( 4 ) ) == BV( 4 ) )  
            printf ( "Branch: Mechanical\n" ) ; 
        if ( ( num & BV( 5 ) ) == BV( 5 ) )  
            printf ( "Branch: Chemical\n" ) ; 
        if ( ( num & BV( 6 ) ) == BV( 6 ) )  
            printf ( "Branch: Electronics\n" ) ; 
        if ( ( num & BV( 7 ) ) == BV( 7 ) )  
            printf ( "Branch: CS\n" ) ; 
        roomnum = num >> 8 ; 
        printf ( "Room number: %d\n", roomnum ) ; 
    } 
    return 0 ; 
} 