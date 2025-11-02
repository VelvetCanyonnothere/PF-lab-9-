
#include <stdio.h>
#include <stdlib.h>
#include <time.h>

void multiplyMatrix(int matrix1[3][3], int matrix2[3][3], int resultMatrix[3][3]);

int main() {
    int matrix2[3][3];
    int matrix1[3][3];
    int resultMatrix[3][3];

    srand(time(0));
    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 3; j++) {
            matrix1[i][j] = rand() % 100;
            matrix2[i][j] = rand() % 100;
        }
    }

    printf("Matrix 1:\n");
    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 3; j++) {
            printf("%d\t", matrix1[i][j]);
        }
        printf("\n");
    }
    printf("Matrix 2:\n");
    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 3; j++) {
            printf("%d\t", matrix2[i][j]);
        }
        printf("\n");
    }

    multiplyMatrix(matrix1, matrix2, resultMatrix);
    printf("Product matrix:\n");
    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 3; j++) {
            printf("%d\t", resultMatrix[i][j]);
        }
        printf("\n");
    }
    return 0;
}

void multiplyMatrix(int matrix1[3][3], int matrix2[3][3], int resultMatrix[3][3]) {
    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 3; j++) {
            resultMatrix[i][j] = 0;
            for (int k = 0; k < 3; k++) {
                resultMatrix[i][j] += matrix1[i][k] * matrix2[k][j];
            }
        }
    }
}

