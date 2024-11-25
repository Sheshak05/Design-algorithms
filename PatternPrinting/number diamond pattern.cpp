#include <stdio.h>

int main() {
  int size = 5;
  int num = 1;
  // upside pyramid
  for (int i = 1; i <= size; i++) {
    // printing spaces
    for (int j = size; j > i; j--) {
      printf(" ");
    }
    // printing number
    for (int k = 0; k < i*2-1; k++) {
      printf("%d", num++);
    }
    // set the number to 1
    num = 1;
    printf("\n");
  }
  // downside pyramid
  for (int i = 1; i <= size-1; i++) {
    // printing spaces
    for (int j = 0; j < i; j++) {
      printf(" ");
    }
    // printing number
    for (int k = (size-i)*2-1; k > 0; k--) {
      printf("%d", num++);
    }
    // set num to 1
    num = 1;
    printf("\n");
  }
  return 0;
}
