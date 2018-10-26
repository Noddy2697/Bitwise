#include <assert.h>
#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int bitAnd(int x, int y) { return ~((~x) | (~y)); }

int main()
{
	assert(bitAnd(1, 3) == 1);
	printf("bitAnd : all test cases passed...\n");
}
