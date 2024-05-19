/*If the string "Alice in wonder land" is fed to the following scanf( ) 
statement, what will be the contents of arrays str1, str2, str3 and 
str4? 
scanf ( "%s%s%s%s", str1, str2, str3, str4 ) ; */
#include <stdio.h>

int main() {
    char str1[20], str2[20], str3[20], str4[20];

    printf("Enter string of four words with space between them: ");
    scanf("%s%s%s%s", str1, str2, str3, str4);

    printf("Contents of str1: %s\n", str1);
    printf("Contents of str2: %s\n", str2);
    printf("Contents of str3: %s\n", str3);
    printf("Contents of str4: %s\n", str4);

    return 0;
}
