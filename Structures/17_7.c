/*Create a structure called library to hold accession number, title of 
the book, author name, price of the book, and flag indicating 
whether book is issued or not. Write a menu-driven program that 
implements the working of a library. The menu options should be: 
1. Add book information 
2. Display book information 
3. List all books of given author 
4. List the title of book specified by accession number 
5. List the count of books in the library 
6. List the books in the order of accession number 
7. Exit
*/
#include <stdio.h>
#include <string.h>

#define MAX_BOOKS 100

struct Library {
    int accessionNumber;
    char title[100];
    char author[50];
    float price;
    int issued; // Flag indicating whether the book is issued or not (0 for not issued, 1 for issued)
};

// Function prototypes
void addBook(struct Library books[], int *numBooks);
void displayBook(struct Library books[], int numBooks);
void listBooksByAuthor(struct Library books[], int numBooks, const char *author);
void findBookByAccessionNumber(struct Library books[], int numBooks, int accessionNumber);
void countBooks(struct Library books[], int numBooks);
void listBooksByAccessionNumber(struct Library books[], int numBooks);
void printMenu();

int main() {
    struct Library books[MAX_BOOKS];
    int numBooks = 0;
    int choice;

    do {
        printMenu();
        printf("Enter your choice: ");
        scanf("%d", &choice);

        switch (choice) {
            case 1:
                addBook(books, &numBooks);
                break;
            case 2:
                displayBook(books, numBooks);
                break;
            case 3:
                {
                    char author[50];
                    printf("Enter author name: ");
                    scanf("%s", author);
                    listBooksByAuthor(books, numBooks, author);
                }
                break;
            case 4:
                {
                    int accessionNumber;
                    printf("Enter accession number: ");
                    scanf("%d", &accessionNumber);
                    findBookByAccessionNumber(books, numBooks, accessionNumber);
                }
                break;
            case 5:
                countBooks(books, numBooks);
                break;
            case 6:
                listBooksByAccessionNumber(books, numBooks);
                break;
            case 7:
                printf("Exiting the program.\n");
                break;
            default:
                printf("Invalid choice. Please enter a valid option.\n");
        }
    } while (choice != 7);

    return 0;
}

void addBook(struct Library books[], int *numBooks) {
    if (*numBooks < MAX_BOOKS) {
        printf("Enter details of book %d:\n", *numBooks + 1);
        printf("Accession Number: ");
        scanf("%d", &books[*numBooks].accessionNumber);
        printf("Title: ");
        scanf("%s", books[*numBooks].title);
        printf("Author: ");
        scanf("%s", books[*numBooks].author);
        printf("Price: ");
        scanf("%f", &books[*numBooks].price);
        printf("Is the book issued? (0 for not issued, 1 for issued): ");
        scanf("%d", &books[*numBooks].issued);
        (*numBooks)++;
    } else {
        printf("Library capacity reached. Cannot add more books.\n");
    }
}

void displayBook(struct Library books[], int numBooks) {
    if (numBooks == 0) {
        printf("No books in the library.\n");
    } else {
        printf("Book information:\n");
        for (int i = 0; i < numBooks; i++) {
            printf("Accession Number: %d, Title: %s, Author: %s, Price: %.2f, Issued: %s\n",
                   books[i].accessionNumber, books[i].title, books[i].author,
                   books[i].price, books[i].issued ? "Yes" : "No");
        }
    }
}

void listBooksByAuthor(struct Library books[], int numBooks, const char *author) {
    printf("Books by author %s:\n", author);
    int found = 0;
    for (int i = 0; i < numBooks; i++) {
        if (strcmp(books[i].author, author) == 0) {
            printf("Accession Number: %d, Title: %s\n", books[i].accessionNumber, books[i].title);
            found = 1;
        }
    }
    if (!found) {
        printf("No books found for author %s.\n", author);
    }
}

void findBookByAccessionNumber(struct Library books[], int numBooks, int accessionNumber) {
    int found = 0;
    for (int i = 0; i < numBooks; i++) {
        if (books[i].accessionNumber == accessionNumber) {
            printf("Title of book with accession number %d: %s\n", accessionNumber, books[i].title);
            found = 1;
            break;
        }
    }
    if (!found) {
        printf("Book with accession number %d not found.\n", accessionNumber);
    }
}

void countBooks(struct Library books[], int numBooks) {
    printf("Total number of books in the library: %d\n", numBooks);
}

void listBooksByAccessionNumber(struct Library books[], int numBooks) {
    printf("Books in the order of accession number:\n");
    for (int i = 0; i < numBooks; i++) {
        printf("Accession Number: %d, Title: %s\n", books[i].accessionNumber, books[i].title);
    }
}

void printMenu() {
    printf("\nLibrary Management System Menu:\n");
    printf("1. Add book information\n");
    printf("2. Display book information\n");
    printf("3. List all books of given author\n");
    printf("4. List the title of book specified by accession number\n");
    printf("5. List the count of books in the library\n");
    printf("6. List the books in the order of accession number\n");
    printf("7. Exit\n");
}
