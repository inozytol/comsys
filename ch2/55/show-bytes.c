#include <stdio.h>

typedef unsigned char *byte_pointer;

void show_bytes(byte_pointer start, size_t len) {
  int i;
  for(i = 0; i < len ; i++){
    printf(" %.2x", start[i]);
  }
  printf("\n");
}

int main() {
  int a = 15;
  show_bytes((byte_pointer) &a, sizeof(int));
  return 0;
}
