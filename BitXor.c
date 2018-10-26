#include <assert.h>
#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int bitXor(int x, int y) { return ~(x & y) & ~(~x & ~y); }

int main()
{
	assert(bitXor(1, 3) == 2);
	printf("bitXor : all test cases passed...\n");
}
