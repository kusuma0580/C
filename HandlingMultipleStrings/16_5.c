/* Write a program to count the number of occurrences of any two 
vowels in succession in a line of text. For example, in the following 
sentence: 
“Please read this application and give me gratuity”  
such occurrences are ea, ea, ui. */
#include <stdio.h> 
int main( ) 
{ 
    char  str[ 80 ] ; 
    int  count = 0 ; 
    char  *s = str ; 
 
    printf ( "\nEnter the string(max limit 80 characters):\n" ) ; 
    gets ( str ) ; 
    while ( *s ) 
    { 
        if ( *s == 'a' || *s == 'e' || *s == 'i' || *s == 'o' || *s == 'u' || *s == 'A' || *s == 'E' || *s == 'I' || *s == 'O' || *s == 'U' ) 
        { 
            s++ ; 
            if ( *s == 'a' || *s == 'e' || *s == 'i' || *s == 'o' || *s == 'u' || *s == 'A' || *s == 'E' || *s == 'I' || *s == 'O' || *s == 'U' ) 
            count ++ ; 
        } 
    s++ ; 
    } 
    printf ( "No. of occurrences: %d\n" , count ) ; 
    return 0 ; 
} 