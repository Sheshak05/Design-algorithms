#include <stdio.h>

int main() {
    int matrix[3][3] = {{1, 2, 3}, {4, 5, 6}, {7, 8, 9}};
    int rowSum[3] = {0}, colSum[3] = {0};

    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 3; j++) {
            rowSum[i] += matrix[i][j];
            colSum[j] += matrix[i][j];
        }
    }

    printf("Row Sums: ");
    for (int i = 0; i < 3; i++)
        printf("%d ", rowSum[i]);

    printf("\nColumn Sums: ");
    for (int i = 0; i < 3; i++)
        printf("%d ", colSum[i]);

    return 0;
}

