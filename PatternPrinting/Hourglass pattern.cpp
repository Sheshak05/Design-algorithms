#include <stdio.h>

int main() {
  int size = 5;
  // reversed pyramid star pattern
  for (int i = 0; i < size; i++) {
    // printing spaces
    for (int j = 0; j < i; j++) {
      printf(" ");
    }
    // printing star
    for (int k = 0; k < (size-i)*2-1; k++) {
      printf("*");
    }
    printf("\n");
  }
  // pyramid star pattern
  for (int i = 2; i <= size; i++) {
    // printing spaces
    for (int j = size; j > i; j--) {
      printf(" ");
    }
    // printing star
    for (int k = 0; k < i*2-1; k++) {
      printf("*");
    }
    printf("\n");
  }
  return 0;
}
