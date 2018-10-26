#include <assert.h>
#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int conditional(int x, int y, int z) {
  // int a = ((((x >> 31) | ((~x + 1) >> 31)) << 31) >> 31);
  int a = (x >> 31) | ((~x + 1) >> 31);
  return ((a & y) + (~a & z));
}

int main()
{
	assert(conditional(5, 4, 6) == 4);
	assert(conditional(0, 4, 6) == 6);
	printf("conditional : all test cases passed...\n");
}

