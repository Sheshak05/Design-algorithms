// C Program to print the Floyd's Triangle
#include <stdio.h>

int main()
{
    int rows = 4;
    int n = 1;
    int i,j;

   
    for ( i = 0; i < rows; i++) {

        
        for (j = 0; j <= i; j++) {
            printf("%d ", n++);
        }
        printf("\n");
    }
    return 0;
}

