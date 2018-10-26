#include <assert.h>
#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int bang(int x) {
  int tmp = (((~x + 1) | x) >> 31);
  // 0 for +ve or -ve, 1 otherwise
  return tmp + 1;
}

int main()
{
	assert(bang(5) == 0);
	assert(bang(-5) == 0);
	assert(bang(0) == 1);
	printf("bang : all test cases passed...\n");
}
