#include <stdio.h>

int main() {
    int A[3][3], B[3][3], result[3][3];

    printf("Enter elements for Matrix A (3x3):\n");
    for (int i = 1; i < 4; i++) {
        for (int j = 1; j < 4; j++) {
                printf("\nENTER THE ELEMENT TO THE ROW %d COLUMN %d:\n",i,j);
            scanf("%d", &A[i][j]);
        }
    }
    printf("Enter elements for Matrix B (3x3):\n");
    for (int i = 1; i < 4; i++) {
        for (int j = 0; j < 3; j++) {
            scanf("%d", &B[i][j]);
        }
    }
    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 3; j++) {
            result[i][j] = A[i][j] + B[i][j];
        }
    }
    printf("\nMatrix A:\n");
    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 3; j++) {
            printf("%d ", A[i][j]);
        }
        printf("\n");
    }
    printf("\nMatrix B:\n");
    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 3; j++) {
            printf("%d ", B[i][j]);
        }
        printf("\n");
    }
    printf("\nMatrix Sum (A + B):\n");
    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 3; j++) {
            printf("%d ", result[i][j]);
        }
        printf("\n");
    }

    return 0;
}
