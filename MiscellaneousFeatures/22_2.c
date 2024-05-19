/*Write a program to read and store information about insurance 
policy holder. The information contains details like gender, whether 
the holder is minor/major, policy name and duration of the policy. 
Make use of bit-fields to store this information.*/
#include <stdio.h> 
#include <string.h> 
int main( ) 
{ 
    struct policy_holder 
    {  
        unsigned gender : 1 ; // 0-Male, 1-Female 
        unsigned status : 1 ; // 0-Minor, 1-Major 
        char name[ 20 ] ; 
        unsigned dr : 5 ; 
    }; 
    struct policy_holder h ; 
    int g, s, d ; 
    char n[ 20 ] ;
    printf ( "\nEnter gender (0-Male, 1-Female): " ) ; 
    scanf ( "%d", &g ) ; 
    printf ( "\nEnter status (0-Minor, 1-Major): " ) ; 
    scanf ( "%d", &s ) ; 
    printf ( "\nEnter name of the policy holder: " ) ; 
    scanf ( "%s", n ) ; 
    printf ( "\nEnter duration (1 to 25 yrs) of the policy: " ) ; 
    scanf ( "%d", &d ) ; 
    h.gender = g ; 
    h.status = s ; 
    strcpy ( h.name, n ) ; 
    h.dr = d ; 
    printf ( "Name: %s\n", h.name ) ; 
    printf ( "Gender: %s\n", h.gender == 0 ? "Male" : "Female" ) ; 
    printf ( "Status: %s\n", h.status == 0 ? "Minor" : "Major" ) ; 
    printf ( "Duration %d\n", h.dr ) ; 
    return 0 ; 
} 
