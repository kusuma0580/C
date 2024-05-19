/* In the file ‘CUSTOMER.DAT’ there are 10 records with the following 
structure: 
struct  customer 
{ 
int  accno ;  char  name[ 30 ] ;   float  balance ; 
} ; 
In another file ‘TRANSACTIONS.DAT’ there are several records with 
the following structure: 
struct  trans 
{ 
int  accno ;  char  trans_type ;   float  amount ; 
} ; 
of 
The element trans_type contains D/W indicating deposit or 
withdrawal 
amount. Write a program to update 
‘CUSTOMER.DAT’ file, i.e., if the trans_type is ‘D’ then update the 
balance of ‘CUSTOMER.DAT’ by adding amount to balance for the 
corresponding accno. Similarly, if trans_type is ‘W’ then subtract 
the amount from balance. However, while subtracting the amount 
ensure that the amount should not get overdrawn, i.e., at least 100 
Rs. should remain in the account.*/