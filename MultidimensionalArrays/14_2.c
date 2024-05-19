/*Match the following with reference to the program segment given 
below: 
int  i, j, = 25 ; 
int  *pi, *pj = & j ; 
*pj = j + 5 ; 
j = *pj + 5 ; 
pj = pj ; 
*pi = i + j ; 

Each integer quantity occupies 2 bytes of memory. The value 
assigned to i begins at (hexadecimal) address F9C and the value 
assigned to j begins at address F9E. Match the value represented by 
expression in left column with values in the right column. 
 
1. &i   a. 30 
2. &j   b. F9E 
3. pj   c. 35 
4. *pj  d. FA2 
5. i    e. F9C 
6. pi   f. 67 
7. *pi  g. unspecified 
8. ( pi + 2 )    h. 65 
9. (*pi + 2)     i. F9E 
10. * ( pi + 2 ) j. F9E 
                 k. FAO 
                 l. F9D
*/

/*Answer:

1. &i          e. F9C 
2. &j          b. F9E
3. pj          i. F9E 
4. *pj         h. 65 
5. i           c. 35 
6. pi          j. F9E 
7. *pi         h. 65 
8. (pi + 2 )   d. FA2 
9. (*pi + 2)   f. 67 
10. * ( pi + 2 ) g. unspecified 

*/