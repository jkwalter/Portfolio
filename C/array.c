#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define N 10

int main(void)
{
	int i;
	int j;
	int list[N] = {0};
	int sum = 0;
	int max = 0;
	int min = 10;
	float mean = 0.0;
	int mode = 0;
	int count[6] = {0};
	int range = 0;
	int swap = 0;

	srand(time(NULL));

	for (i = 0; i < N; i++)
	{
		list[i] = rand() % 5 + 1;
		if (i == N - 1)
		{
			printf("%d\n", list[i]);
		}
		else
		{
			printf("%d, ", list[i]);
		}
	}

	for (i = 0; i < N; i++)
	{
		sum = sum + list[i];
		if (list[i] > max)
		{
			max = list[i];
		}
		if (list[i] < min)
		{
			min = list[i];
		}
		count[list[i]]++;
	}

	mean = (sum * 1.0) / (N * 1.0);
	range = max - min;

	for (i = 1; i < 6; i++)
	{
		if (count[i] > count[mode])
		{
			mode = i;
		}
	}

	printf("       Sum: %d\n", sum);
	printf("   Maximum: %d\n", max);
	printf("   Minimum: %d\n", min);
	printf("      Mean: %f\n", mean);
	printf("      Mode: %d\n", mode);
	printf("Mode Count: %d\n", count[mode]);
	printf("     Range: %d\n", range);

	for (i = 1; i < N; i++)
	{
		for (j = 0; j < N - i; j++)
		{
			if (list[j+1] < list[j])
			{
				swap = list[j];
				list[j] = list[j+1];
				list[j+1] = swap;
			}
		}
	}

	for (i = 0; i < N; i++)
	{
		if (i == N - 1)
		{
			printf("%d\n", list[i]);
		}
		else
		{
			printf("%d, ", list[i]);
		}
	}

	return 0;
}
