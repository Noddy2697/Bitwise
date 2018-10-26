#include <assert.h>
#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int isPower2(int x) {
  /*
   * If a positive number is power of 2, the leading bit should be
   * 0 and (x-1)&x == 0
   */
  int sign = !(x >> 31);
  return (!!x) & sign & !((x + ~1 + 1) & x);
  // return (x & (-x))==x; if == allowed
}

int main()
{
	assert(isPower2(8) == 1);
	assert(isPower2(7) == 0);
	assert(isPower2(-8) == 0);
	printf("isPower2 : all test cases passed...\n");
}

