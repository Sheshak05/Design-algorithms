#include <stdio.h>
int main() {
    int n = 5;
    for (int i = 1; i <= n; i++) {
        // Left half
        for (int j = 1; j <= i; j++) {
            printf("* ");
        }
        // Spaces in the middle
        for (int j = 1; j <= 2 * (n - i); j++) {
            printf("  ");
        }
        // Right half
        for (int j = 1; j <= i; j++) {
            printf("* ");
        }
        printf("\n");
    }
    for (int i = n - 1; i >= 1; i--) {
        // Left half
        for (int j = 1; j <= i; j++) {
            printf("* ");
        }
        // Spaces in the middle
        for (int j = 1; j <= 2 * (n - i); j++) {
            printf("  ");
        }
        // Right half
        for (int j = 1; j <= i; j++) {
            printf("* ");
        }
        printf("\n");
    }
    return 0;
}

