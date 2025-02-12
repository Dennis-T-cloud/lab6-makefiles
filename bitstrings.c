#include <stdio.h>

// set the nth bit of b to bit
// example: set_nth_bit(0b101, 1, 1) => 0b111
size_t set_nth_bit(size_t b, int n, int bit) {
    // TODO
}

// return the subbitstring, where start is the least significant bit
// (inclusive), and end is the most significant bit (inclusive)
// example: sub_bitstring(0b101101, 2, 6) => 0b1011
size_t sub_bitstring(size_t b, size_t start, size_t end) {
    // TODO
}

void print_bin(size_t n) {
  int i;
  unsigned int mask = 1 << (sizeof(int) * 8 - 1);

  for (i = 0; i < sizeof(int) * 8; i++) {
    if (n & mask) { 
      printf("1");
    } else {
      printf("0");
    }
    mask >>= 1;
  }
  printf("\n");
}

int main(void) {
    // Test things out here
}
