#include <assert.h>
#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int sign(int x) { return (x >> 31) | (!(!x)); }

int main()
{
	assert(sign(-5) == -1);
	assert(sign(0) == 0);
	assert(sign(5) == 1);
	printf("bitwise : all test cases passed...\n");
}
