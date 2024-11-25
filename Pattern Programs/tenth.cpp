// C Program to print hollow square pattern using * star
#include <stdio.h>

int main()
{
    int rows = 5;
    int i,j,k;

  
    for (i = 0; i < rows; i++) {

      
        for (j = 0; j < rows; j++) {
            
            if (i > 0 && i < rows - 1 && j > 0
                && j < rows - 1) {
                printf("  ");
            }
            else {
                printf("* ");
            }
        }
        printf("\n");
    }
    return 0;
}

