#include <stdio.h>

struct customer{
    float balance;
    char name[50];
    long int accnum;
};

void deposited(int totcustomer, struct customer customers[], long int accno, float deposit){
    for(int i = 0; i < totcustomer; i++){
        if(customers[i].accnum == accno){
            customers[i].balance += deposit;
            printf("your current balance of accno %ld is: %f", accno, customers[i].balance);
            break;
        }
    }
}
void withdrawel(int totcustomer, struct customer customers[], long int accno, float withdraw){
    for(int i = 0; i < totcustomer; i++){
        if(customers[i].accnum == accno){
            customers[i].balance -= withdraw;
            printf("your current balance of accno %ld is: %f", accno, customers[i].balance);
            break;
        }
    }
}
void display(int totcustomer, struct customer customers[], long int accno){
    for(int i = 0; i < totcustomer; i++){
        if(customers[i].accnum == accno){
            printf("your current balance of accno %ld is: %f", accno, customers[i].balance);
            break;
        }
    }
    
}
int main() {
    // Write C code here
    struct customer customers[50];
    int totcustomers = 0;
    long int accnum;
    float deposit, withdraw;
    char choose;
    
    printf("Bank management System:\n code 1:deposit\n code 2:withdraw\n code 3:display\n code 4:Exit");
    
    do{
        printf("enter balance:");
        scanf("%f", &customers[totcustomers].balance);
        printf("enter name:");
        scanf("%s", &customers[totcustomers].name);
        printf("enter accnum:");
        scanf("%ld", &customers[totcustomers].accnum);
        totcustomers++;
        printf("do you want to add customers?y/n:\n");
        printf("enter y/n:");
        scanf(" %c", &choose);
    }while(choose == 'y');

    printf("Enter your choice code:\n");
    int choice;
    scanf("%d", &choice);
    switch(choice){
        case 1:
            printf("enter accno");
            scanf("%ld", &accnum);
            printf("enter amount to deposit:");
            scanf("%f", &deposit);
            deposited(totcustomers, customers, accnum, deposit);
            break;
        case 2:
            printf("enter accno");
            scanf("%ld", &accnum);
            printf("amount to withdraw:");
            scanf("%f", &withdraw);
            withdrawel(totcustomers, customers, accnum, withdraw);
            break;
        case 3:
            printf("enter accno");
            scanf("%ld", &accnum);
            display(totcustomers, customers, accnum);
            break;
        case 4:
            printf("Successful exit from system");
    }
    return 0;
}