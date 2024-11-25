// C program to print the pascal's triangle pattern
#include <stdio.h>

int main()
{
    int rows = 5;
    int i,j,k;

 
    for ( i = 1; i <= rows; i++) {

        
        for (int j = 0; j < rows - i; j++) {
            printf(" ");
        }

        int C = 1; 

       
        for (k = 1; k <= i; k++) {
            printf("%d ", C);
            C = C * (i - k) / k;
        }
        printf("\n");
    }
    return 0;
}

