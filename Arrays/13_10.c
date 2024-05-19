/*A dequeue is an ordered set of elements in which elements may be 
inserted or retrieved from either end. Using an array simulate a 
dequeue of characters and the operations retrieve left, retrieve 
right, insert left, insert right. Exceptional conditions such as 
dequeue full or empty should be reported. Use two pointers left 
and right for this simulation.*/
#include <stdio.h>
#include <stdbool.h>

#define MAX_SIZE 10

char dequeue[MAX_SIZE];
char *left = NULL;
char *right = NULL;

// Function to check if the deque is full
bool isFull() {
    return ((left == &dequeue[0] && right == &dequeue[MAX_SIZE - 1]) || left == right + 1);
}

// Function to check if the deque is empty
bool isEmpty() {
    return (left == NULL);
}

// Function to insert element at the left end of the deque
void insertLeft(char x) {
    if (isFull()) {
        printf("Deque is full. Cannot insert.\n");
        return;
    }
    if (left == NULL) {
        left = &dequeue[0];
        right = &dequeue[0];
    } else if (left == &dequeue[0]) {
        left = &dequeue[MAX_SIZE - 1];
    } else {
        left--;
    }
    *left = x;
    printf("Inserted %c at left end.\n", x);
}

// Function to insert element at the right end of the deque
void insertRight(char x) {
    if (isFull()) {
        printf("Deque is full. Cannot insert.\n");
        return;
    }
    if (left == NULL) {
        left = &dequeue[0];
        right = &dequeue[0];
    } else if (right == &dequeue[MAX_SIZE - 1]) {
        right = &dequeue[0];
    } else {
        right++;
    }
    *right = x;
    printf("Inserted %c at right end.\n", x);
}

// Function to retrieve element from the left end of the deque
void retrieveLeft() {
    if (isEmpty()) {
        printf("Deque is empty. Cannot retrieve.\n");
        return;
    }
    printf("Retrieved %c from left end.\n", *left);
    if (left == right) {
        left = NULL;
        right = NULL;
    } else if (left == &dequeue[MAX_SIZE - 1]) {
        left = &dequeue[0];
    } else {
        left++;
    }
}

// Function to retrieve element from the right end of the deque
void retrieveRight() {
    if (isEmpty()) {
        printf("Deque is empty. Cannot retrieve.\n");
        return;
    }
    printf("Retrieved %c from right end.\n", *right);
    if (left == right) {
        left = NULL;
        right = NULL;
    } else if (right == &dequeue[0]) {
        right = &dequeue[MAX_SIZE - 1];
    } else {
        right--;
    }
}

int main() {
    // Example usage of deque operations
    insertRight('A');
    insertLeft('B');
    insertRight('C');
    insertLeft('D');

    retrieveLeft();
    retrieveRight();
    retrieveLeft();
    retrieveRight();
    retrieveLeft();
    retrieveRight();

    return 0;
}
