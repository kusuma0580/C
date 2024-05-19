/* Write macro definitions for the following: 
1. To find arithmetic mean of two numbers. 
2. To find absolute value of a number. 
3. To convert an uppercase alphabet to lowercase. 
4. To obtain the biggest of three numbers. */

//1

#define ARITHMETIC_MEAN(x, y) (((x) + (y)) / 2.0)

//2

#define ABS(x) ((x) < 0 ? -(x) : (x))

//3

#define TO_LOWER_CASE(ch) ((ch >= 'A' && ch <= 'Z') ? (ch + 32) : ch)

//4
 
#define MAX_OF_THREE(x, y, z) ((x > y && x > z) ? x : (y > z ? y : z))
