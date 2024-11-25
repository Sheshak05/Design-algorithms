#include <stdio.h>

void multiplyMatrices(int *a, int *b, int *c, int r1, int c1, int c2) {
    for (int i = 0; i < r1; i++)
        for (int j = 0; j < c2; j++) {
            *(c + i * c2 + j) = 0;
            for (int k = 0; k < c1; k++)
                *(c + i * c2 + j) += *(a + i * c1 + k) * *(b + k * c2 + j);
        }
}

int main() {
    int a[2][2] = {{1, 2}, {3, 4}};
    int b[2][2] = {{1, 0}, {0, 1}};
    int c[2][2];
    multiplyMatrices(&a[0][0], &b[0][0], &c[0][0], 2, 2, 2);

    printf("Product Matrix:\n");
    for (int i = 0; i < 2; i++) {
        for (int j = 0; j < 2; j++)
            printf("%d ", c[i][j]);
        printf("\n");
    }
    return 0;
}

