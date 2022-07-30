#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define N 3
#define M 2

int main(void)
{
	int i;
	int j;
	int k;
	int A[N][M] = {0};
	int B[M][N] = {0};
	int AB[N][N] = {0};

	srand(time(NULL));

	printf("MATRIX A\n");
	for (i = 0; i < N; i++)
	{
		for (j = 0; j < M; j++)
		{
			A[i][j] = rand() % 4;
			printf("%2d ", A[i][j]);
		}
		printf("\n");
	}

	printf("MATRIX B\n");
	for (i = 0; i < M; i++)
	{
		for (j = 0; j < N; j++)
		{
			B[i][j] = rand() % 5;
			printf("%2d ", B[i][j]);
		}
		printf("\n");
	}

	printf("MATRIX AB\n");
	for (i = 0; i < N; i++)
	{
		for (j = 0; j < N; j++)
		{
			for (k = 0; k < M; k++)
			{
				AB[i][j] = AB[i][j] + A[i][k] * B[k][j];
			}
			printf("%2d ", AB[i][j]);
		}
		printf("\n");
	}

	return 0;
}
