#include <stdio.h>

int main() {
    int rows = 5;
    int i, j; 

    for (i = 0; i < rows; i++) {
      
        for (j = 0; j < rows - i - 1; j++) {
            printf(" ");
        }
        
        for (j = 0; j <= i; j++) {
            printf("* ");
        }
        printf("\n");
    }
    return 0;
}

