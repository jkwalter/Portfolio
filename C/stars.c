#include <stdio.h>

int main(void)
{
	int i;
	int j;
	int num;

	do
	{
		printf("Enter a positive number less than or equal to 10: ");
		scanf("%d", &num);
	} while (num < 1 || num > 10);

	printf("\n");
	
	for (i = 0; i < num; i++)
	{
		for (j = num; j > i; j--)
		{
			printf("*");
		}
		printf("\n");
	}

	return 0;
}
