#include <stdio.h>

int main() {
    int rows, columns;

    // Input for number of rows and columns
    printf("Enter the number of rows: ");
    scanf("%d", &rows);
    printf("Enter the number of columns: ");
    scanf("%d", &columns);

    // Loop to print the solid rectangle pattern
    for (int i = 1; i <= rows; i++) {
        for (int j = 1; j <= columns; j++) {
            printf("*"); // Print a star
        }
        printf("\n"); // Move to the next line after each row
    }

    return 0;
}
