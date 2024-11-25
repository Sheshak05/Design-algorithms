#include <stdio.h>

int main() {
  
  int size = 5;
  for (int i = 0; i < size; i++) {
  	
    
  for (int j = 0; j < i; j++) {
      printf(" ");
    }
    // printing stars
    for (int j = size; j > i; j--) {
      printf("*");
    }
    printf("\n");
  }
  return 0;
}
