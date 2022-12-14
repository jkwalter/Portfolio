#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(void)
{
	int num;
	int guess;
	int used[10] = {0};

	srand(time(NULL));
	
	num = rand() % 9 + 1;

	printf("------------------------\n");
	printf("     GUESSING GAME!\n");
	printf("------------------------\n");

	do
	{
		printf("Enter a number between 1 and 9: ");
		scanf("%d", &guess);
		if (guess < 1)
		{
			printf("%d is smaller than 1.\n", guess);
			printf("\n");
		}
		else if (guess > 9)
		{
			printf("%d is larger than 9.\n", guess);
			printf("\n");
		}
		else if (guess < num)
		{
			if (used[guess] == 1)
			{
				printf("%d has already been guessed!\n", guess);
				printf("\n");
			}
			else
			{
				printf("%d is too small!\n", guess);
				printf("\n");
				used[guess] = 1;
			}
		}
		else if (guess > num)
		{
			if (used[guess] == 1)
			{
				printf("%d has already been guessed!\n", guess);
				printf("\n");
			}
			else
			{
				printf("%d is too large!\n", guess);
				printf("\n");
				used[guess] = 1;
			}
		}
	} while (guess != num);

	printf("CONGRATULATIONS! %d is the correct number!\n", guess);

	return 0;
}
