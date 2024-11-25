#include <stdio.h>

int main() {
  
  int size = 3;

  for (int i = 1; i <= size; i++) {
    for (int j = 0; j < size-i; j++) {
      printf(" ");
    }
    for (int k = 0; k < i; k++) {
      printf("*");
    }
    printf("\n");
  }
  for (int i = 1; i <= size-1; i++) {
    for (int j = 0; j < i; j++) {
      printf(" ");
    }
    for (int k = 0; k < size-i; k++) {
      printf("*");
    }
    printf("\n");
  }
  return 0;
}
