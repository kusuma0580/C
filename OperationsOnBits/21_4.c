/*What will be the output of the following program? 
# include <stdio.h> 
int main( ) 
{ 
    int  i = 32, j = 65, k, l, m, n, o, p ; 
    k = i | 35 ;   
    l = ~k ;   m = i & j ; 
    n = j ^ 32 ;   o = j << 2 ;   p = i >> 5 ; 
    printf ( "k = %d l = %d m = %d\n", k, l, m ) ; 
    printf ( "n = %d o = %d p = %d\n", n, o, p ) ; 
    return 0 ; 
} */


/*
k = 35    l = -36    m = 0 
n = 97    o = 260    p = 1


k = 35 l = -36 m = 32
n = 49 o = 260 p = 1
*/