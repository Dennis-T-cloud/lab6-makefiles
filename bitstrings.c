#include <stdio.h>

// set the nth bit of b to bit
// example: set_nth_bit(0b101, 1, 1) => 0b111
size_t set_nth_bit(size_t b, int n, int bit) { return 0; }

// return the subbitstring, where start is the least significant bit
// (inclusive), and end is the most significant bit (inclusive)
// example: sub_bitstring(0b101101, 2, 6) => 0b1011
size_t sub_bitstring(size_t b, size_t start, size_t end) { return 0; }

// given a bitmask of size mask_size, apply the mask to b repeatedly, moving up
// the position of the mask until the mask has been applied to the whole size_t.
// Assume that the size of size_t is 32 for this exercise example:
// loop_mask(0b0, 0b101, 3) => 0b01101...101101
size_t loop_mask(size_t b, size_t mask, size_t mask_size) { return 0; }

void print_bin(size_t n) {
  while (n) {
    if (n & 1)
      printf("1");
    else
      printf("0");

    n >>= 1;
  }
  printf("\n");
}

int main(void) { return 0; }
