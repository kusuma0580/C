/*Create a structure that can contain data of customers in a bank. The 
data to be stored is Account number, Name and Balance in account. 

Assume maximum of 200 customers in the bank. 

(1) Define a function to print the Account number and name of 
each customer with balance below Rs. 1000. 
(2) If a customer requests for withdrawal or deposit, it should 
receive as input Account number, amount and code (1 for 
deposit, 0 for withdrawal). 

Define a function that prints a message, “The balance is 
insufficient for the specified withdrawal”, if on withdrawal the 
balance falls below Rs. 1000.
*/
#include <stdio.h>
#include <string.h>

#define MAX_CUSTOMERS 200
struct Customer {
    int accountNumber;
    char name[50];
    float balance;
};

// Function prototypes
void printLowBalanceCustomers(struct Customer customers[], int numCustomers);
void transaction(struct Customer customers[], int numCustomers, int accountNumber, float amount, int code);
void printInsufficientBalanceMessage();

int main() {
    struct Customer customers[MAX_CUSTOMERS];
    int numCustomers = 0;

    printf("Enter customer information (Enter 'exit' for account number to stop):\n");
    while (1) {
        printf("Enter account number: ");
        scanf("%d", &customers[numCustomers].accountNumber);
        if (customers[numCustomers].accountNumber == -1) {
            break;
        }
        printf("Enter name: ");
        scanf("%s", customers[numCustomers].name);
        printf("Enter balance: ");
        scanf("%f", &customers[numCustomers].balance);
        numCustomers++;
    }

    printLowBalanceCustomers(customers, numCustomers);

    int accountNumber;
    float amount;
    int code;
    printf("\nEnter details for transaction:\n");
    printf("Enter account number: ");
    scanf("%d", &accountNumber);
    printf("Enter amount: ");
    scanf("%f", &amount);
    printf("Enter code (1 for deposit, 0 for withdrawal): ");
    scanf("%d", &code);
    transaction(customers, numCustomers, accountNumber, amount, code);

    return 0;
}

void printLowBalanceCustomers(struct Customer customers[], int numCustomers) {
    printf("\nCustomers with balance below Rs. 1000:\n");
    for (int i = 0; i < numCustomers; i++) {
        if (customers[i].balance < 1000) {
            printf("Account Number: %d, Name: %s\n", customers[i].accountNumber, customers[i].name);
        }
    }
}

void transaction(struct Customer customers[], int numCustomers, int accountNumber, float amount, int code) {
    for (int i = 0; i < numCustomers; i++) {
        if (customers[i].accountNumber == accountNumber) {
            if (code == 1) { // Deposit
                customers[i].balance += amount;
                printf("Deposit of Rs. %.2f successful. New balance: Rs. %.2f\n", amount, customers[i].balance);
            } else { // Withdrawal
                if (customers[i].balance - amount < 1000) {
                    printInsufficientBalanceMessage();
                } else {
                    customers[i].balance -= amount;
                    printf("Withdrawal of Rs. %.2f successful. New balance: Rs. %.2f\n", amount, customers[i].balance);
                }
            }
            return;
        }
    }
    printf("Customer with account number %d not found.\n", accountNumber);
}

void printInsufficientBalanceMessage() {
    printf("The balance is insufficient for the specified withdrawal.\n");
}
