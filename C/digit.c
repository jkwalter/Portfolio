#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define N 10
#define DIGIT 7

int main(void)
{
	int i;
	int number;
	int divide;
	int print;

	srand(time(NULL));

	for (i = 0; i < N; i++)
	{
		number = rand();
		divide = number;
		print = 0;
		while (divide != 0)
		{
			if (divide % 10 == DIGIT && print == 0)
			{
				printf("%d\n", number);
				print = 1;
			}
			divide = divide / 10;
		}
	}
	
	return 0;
}
