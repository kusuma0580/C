/*If we are to display the following output properly aligned which 
format specifiers would you use? 
Discovery of India          Jawaharlal Nehru      425.50  
My Experiments with Truth   Mahatma Gandhi        375.50
Sunny Days                  Sunil Gavaskar        95.50
One More Over               Erapalli Prasanna     85.00
  
*/

#include <stdio.h>

int main() {
    printf("%-40s%-20s%10.2f\n", "Discovery of India", "Jawaharlal Nehru", 425.50);
    printf("%-40s%-20s%10.2f\n", "My Experiments with Truth", "Mahatma Gandhi", 375.50);
    printf("%-40s%-20s%10.2f\n", "Sunny Days", "Sunil Gavaskar", 95.50);
    printf("%-40s%-20s%10.2f\n", "One More Over", "Erapalli Prasanna", 85.00);

    return 0;
}
