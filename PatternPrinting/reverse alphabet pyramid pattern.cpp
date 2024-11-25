#include <stdio.h>

int main() {
  // size of the square
  int size = 5, alpha = 65;
  for (int i = 0; i < size; i++) {
    // print spaces
    for (int j = 0; j < i; j++) {
      printf(" ");
    }
    // print alphabets
    for (int k = 0; k < 2*(size-i)-1; k++) {
      printf("%c", alpha + k);
    }
    printf("\n");
  }
  return 0;
}
