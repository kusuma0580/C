/*The natural logarithm can be approximated by the following series. 
 
If x is input through the keyboard, write a program to calculate the 
sum of first seven terms of this series. */

# include <stdio.h> 
# include <math.h> 
int main( ) 
{ 
    int  x, i ; 
    float  result = 0 ; 
    printf ( "\nEnter the value of x: " ) ; 
    scanf ( "%d", &x ) ; 
    for ( i = 1; i <= 7 ; i++ ) 
    { 
        if ( i == 1 ) 
            result = result + pow ( ( x - 1.0 ) / x, i ) ; 
        else 
            result = result + ( 1.0 / 2 )  * pow ( ( x - 1.0 ) / x, i ) ; 
    } 
    printf ( "\nLog ( %d ) = %f\n", x, result ) ; 
    return 0 ; 
} 