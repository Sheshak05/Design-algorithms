#include <stdio.h>

int main() {
    int n;
    printf("Enter the number of rows (half of the diamond): ");
    scanf("%d", &n);
    for (int i = 1; i <= n; i++) {
        for (int j = 1; j <= n - i; j++) {
            printf(" ");
        }
        char ch = 'A';
        for (int k = 1; k <= i; k++) {
            printf("%c", ch++);
        }
        ch -= 2;
        for (int l = 1; l < i; l++) {
            printf("%c", ch--);
        }
        printf("\n");
    }
    for (int i = n - 1; i >= 1; i--) {
        for (int j = 1; j <= n - i; j++) {
            printf(" ");
        }
        char ch = 'A';
        for (int k = 1; k <= i; k++) {
            printf("%c", ch++);
        }
        ch -= 2;
        for (int l = 1; l < i; l++) {
            printf("%c", ch--);
        }
        printf("\n");
    }

    return 0;
}
