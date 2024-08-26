 //write a program to multiply two  matrix of size 3*3

#include <stdio.h>

#define N 3 // Size of the matrices (3x3)

// Function to multiply two 3x3 matrices


void multiplyMatrices(int mat1[][N], int mat2[][N], int result[][N]) {
    // Perform matrix multiplication
    for (int i = 0; i < N; i++) {
        for (int j = 0; j < N; j++) {
            result[i][j] = 0;
            for (int k = 0; k < N; k++) {
                result[i][j] += mat1[i][k] * mat2[k][j];
            }
        }
    }
}

// Function to display a 3x3 matrix
void displayMatrix(int matrix[][N]) {
    for (int i = 0; i < N; i++) {
        for (int j = 0; j < N; j++) {
            printf("%d\t", matrix[i][j]);
        }
        printf("\n");
    }
}

int main() {
    int matrix1[N][N];
    int matrix2[N][N];
    int result[N][N];

    // Input for the first matrix
    printf("Enter elements of the first 3x3 matrix:\n");
    for (int i = 0; i < N; i++) {
        for (int j = 0; j < N; j++) {
            printf("Enter element at [%d][%d]: ", i, j);
            scanf("%d", &matrix1[i][j]);
        }
    }

    // Input for the second matrix
    printf("Enter elements of the second 3x3 matrix:\n");
    for (int i = 0; i < N; i++) {
        for (int j = 0; j < N; j++) {
            printf("Enter element at [%d][%d]: ", i, j);
            scanf("%d", &matrix2[i][j]);
        }
    }

    // Multiply the two matrices
    multiplyMatrices(matrix1, matrix2, result);

    // Display the matrices and the result
    printf("\nFirst matrix:\n");
    displayMatrix(matrix1);

    printf("\nSecond matrix:\n");
    displayMatrix(matrix2);

    printf("\nResultant matrix after multiplication:\n");
    displayMatrix(result);

    return 0;
}
