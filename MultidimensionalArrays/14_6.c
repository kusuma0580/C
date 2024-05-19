/*Write a program to add two 6 x 6 matrices.*/
#include <stdio.h>

#define ROWS 6
#define COLS 6

void add_matrices(int mat1[ROWS][COLS], int mat2[ROWS][COLS], int result[ROWS][COLS]) {
    int i, j;
    for (i = 0; i < ROWS; i++) {
        for (j = 0; j < COLS; j++) {
            result[i][j] = mat1[i][j] + mat2[i][j];
        }
    }
}

void print_matrix(int mat[ROWS][COLS]) {
    int i, j;
    for (i = 0; i < ROWS; i++) {
        for (j = 0; j < COLS; j++) {
            printf("%d\t", mat[i][j]);
        }
        printf("\n");
    }
}

int main() {
    int mat1[ROWS][COLS], mat2[ROWS][COLS], result[ROWS][COLS];
    int i, j;

    printf("Enter elements of first 6x6 matrix:\n");
    for (i = 0; i < ROWS; i++) {
        for (j = 0; j < COLS; j++) {
            scanf("%d", &mat1[i][j]);
        }
    }

    printf("Enter elements of second 6x6 matrix:\n");
    for (i = 0; i < ROWS; i++) {
        for (j = 0; j < COLS; j++) {
            scanf("%d", &mat2[i][j]);
        }
    }

    add_matrices(mat1, mat2, result);

    printf("Resultant matrix after addition:\n");
    print_matrix(result);

    return 0;
}
