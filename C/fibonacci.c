#include <stdio.h>

void fibonacci(long x, long y, int i, int n)
{
	printf(" %2d: %ld\n", i, x + y);
	
	if (i < n)
	{
		fibonacci(y, x + y, i + 1, n);
	}
}

int main(void)
{
	long x = 0;
	long y = 1;
	int i = 0;
	
	printf("===========================\n");
	printf(" FIBONACCI NUMBERS: 0 - 20 \n");
	printf("===========================\n");
	printf("\n");

	printf(" %2d: %ld\n", i, x);
	i++;
	printf(" %2d: %ld\n", i, y);

	fibonacci(x, y, i + 1, 20);

	return 0;
}
