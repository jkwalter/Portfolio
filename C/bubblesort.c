#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define N 10

int main(void)
{
	int i;
	int j;
	int swap;
	int A[N] = {0};

	srand(time(NULL));

	printf("GENERATING LIST\n");

	for (i = 0; i < N; i++)
	{
		A[i] = rand() % N + 1;
		printf("%3d: %d\n", i, A[i]);
	}

	printf("\n");
	printf("SORTING LIST\n");

	for (i = 1; i < N; i++)
	{

		for (j = 0; j < N - i; j++)
		{
			if (A[j+1] > A[j])
			{
				swap = A[j+1];
				A[j+1] = A[j];
				A[j] = swap;
			}
		}
	}

	printf("\n");
	printf("SORTED LIST\n");

	for (i = 0; i < N; i++)
	{
		printf("%3d: %d\n", i, A[i]);
	}

	return 0;
}
