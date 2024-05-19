/* How will you use the program given below to perform the following 
operations? 
Copy the contents of one file into another. 
Create a new file and add some text to it. 
Display the contents of an existing file. 
# include <stdio.h>
int main( ) 
{ 
    char  ch, str[ 10 ] ; 
    while ( ( ch = fgetc ( stdin ) ) != -1 ) 
    fputc ( ch, stdout ) ; 
    return 0 ; 
} 


*/



