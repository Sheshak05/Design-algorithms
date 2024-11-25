#include <stdio.h>

int main() {
  // size of plus, use odd number
  int size = 5;

  for (int i = 0; i < size; i++) {
    for (int j = 0; j < size; j++) {
      // print only stars in middle row
      if (i == size / 2) {
        printf("*");
      }
      // other than middle row, print star only at index size/2
      else {
        if (j == size / 2) {
          printf("*");
        } else {
          printf(" ");
        }
      }
    }
    printf("\n");
  }
  return 0;
}
