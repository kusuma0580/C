/* Write a program to delete all vowels from a sentence. Assume that 
the sentence is not more than 80 characters long.*/
#include <stdio.h> 
int main( ) 
{ 
    char  str[ 80 ], str1[ 80 ] ; 
    char  *s, *p ;
    printf ( "\nEnter a sentence of max 80 characters:\n" ) ; 
    gets ( str ) ; 
    s = str ;   
    p = str1 ; 
    while ( *s ) 
    { 
        if ( *s == 'a' || *s == 'e' || *s == 'i' || *s == 'o' || *s == 'u' ) 
            s++ ; 
        else if ( *s == 'A' || *s == 'E' || *s == 'I' || *s == 'O' || *s == 'U' ) 
            s++ ; 
        else 
            *p++ = *s++ ; 
    } 
    *p = '\0' ; 
    printf ( "\n\nSentence after removing all vowels is:\n" ) ; 
    puts ( str1 ) ; 
    return 0 ; 
}  