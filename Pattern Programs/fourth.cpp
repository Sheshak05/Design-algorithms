// C program to print the inverted right half pyramid of
// stars
#include <stdio.h>

int main()
{
    int rows = 5;
    int i,j;

  
    for (i = 0; i < rows; i++) {

        
        for ( j = 0; j < rows - i; j++) {
            printf("* ");
        }
        printf("\n");
    }
}

