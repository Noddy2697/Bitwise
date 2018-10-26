#include <assert.h>
#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int getByte(int x, int n) {
  // n << 3 -> Multiply by 8
  // x >> (n << 3) -> Right Shift by 0, 8, 16 and 24 bytes
  return (x >> (n << 3) & (0xFF));
}

int main()
{
	assert(getByte(0xABCD, 0) == 0xCD);
	assert(getByte(0xABCD, 1) == 0xAB);
	printf("getByte : all test cases passed...\n");
}
