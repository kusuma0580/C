/* A Credit Card number is usually a 16-digit number. A valid Credit 
Card number would satisfy a rule explained below with the help of a 
dummy Credit Card number—4567 1234 5678 9129. Start with the 
rightmost - 1 digit and multiply every other digit by 2.  
4 5 6 7     1 2 3 4    5 6 7 8  9 1 2 9
8  12  2  6  10  14  18  4

Then subtract 9 from numbers that are larger than 10. Thus, we get: 
8  3  2  6  1  5  9  4 
Add them all up to get 38. 
Add all the other digits (5, 7, 2, 4, 6, 8, 1, 9) to get 42. 
Sum of 38 and 42 is 80. Since 80 is divisible by 10, the Credit Card 
number is valid. 
Write a program that receives a Credit Card number and checks 
using the above rule whether the Credit Card number is valid. 

*/
#include <stdio.h>

int is_valid_credit_card(const char *credit_card_number) {
    int sum = 0;
    int length = 0;
    
    while (credit_card_number[length] != '\0') {
        length++;
    }
    
    for (int i = length - 2; i >= 0; i -= 2) {
        int digit = (credit_card_number[i] - '0') * 2;
        
        if (digit > 9) {
            digit -= 9;
        }
        
        sum += digit;
    }
    
    for (int i = length - 1; i >= 0; i -= 2) {
        sum += (credit_card_number[i] - '0');
    }
    
    return (sum % 10 == 0);
}

int main() {
    char credit_card_number[17];

    printf("Enter 16-digit Credit Card number: ");
    scanf("%s", credit_card_number);

    if (is_valid_credit_card(credit_card_number)) {
        printf("Valid Credit Card number.\n");
    } else {
        printf("Invalid Credit Card number.\n");
    }

    return 0;
}
