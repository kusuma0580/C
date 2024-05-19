/*Write a program to find if a square matrix is symmetric.*/
#include <stdio.h>
#include <stdbool.h>

#define N 3 

bool is_symmetric(int mat[N][N]) {
    int i, j;
    for (i = 0; i < N; i++) {
        for (j = 0; j < N; j++) {
            if (mat[i][j] != mat[j][i]) {
                return false;
            }
        }
    }
    return true;
}

int main() {
    int mat[N][N];
    int i, j;

    printf("Enter elements of a %dx%d square matrix:\n", N, N);
    for (i = 0; i < N; i++) {
        for (j = 0; j < N; j++) {
            scanf("%d", &mat[i][j]);
        }
    }

    if (is_symmetric(mat)) {
        printf("The matrix is symmetric.\n");
    } else {
        printf("The matrix is not symmetric.\n");
    }

    return 0;
}
