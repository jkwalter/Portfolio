#include <stdio.h>

int main(void)
{
	int i;
	int n;
	int sum = 0;

	do
	{
		printf("Enter a number between 1 and 20: ");
		scanf("%d", &n);
	} while (n < 1 || n > 20);

	for (i = 1; i <= n; i++)
	{
		sum = sum + i;
	}

	printf("\n");
	printf("Sum from 1 to %d: %d\n", n, sum);

	return 0;
}
