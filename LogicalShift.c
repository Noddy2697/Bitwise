#include <assert.h>
#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int logicalShift(int x, int n) {
  /* Use mask to mask out the leading bits. */
  int mask = ~(((1 << 31) >> n) << 1);
  return (x >> n) & mask;
}

int main()
{
	assert(logicalShift(-1,30)==3);
	printf("logicalShift : all test cases passed...\n");
}
