
#include <stdio.h>

int main()
{
    int rows = 5;
    int i,j,k;

  
    for (i = 0; i < rows; i++) {

      
        for (j = 0; j < 2 * i + 1; j++) {
            printf(" ");
        }

        
        for ( k = 0; k < 2 * (rows - i) - 1; k++) {
            if (k == 0 || k == 2 * (rows - i) - 2 || i == 0)
                printf("* ");
            else {
                printf("  ");
            }
        }
        printf("\n");
    }
    return 0;
}

