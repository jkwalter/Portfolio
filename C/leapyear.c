#include <stdio.h>

int main(void)
{
	int year;
	
	do
	{
		printf("Enter a year (0-9999): ");
		scanf("%d", &year);
	} while (year < 0 || year > 9999);

	if (year % 4 == 0 && year % 100 != 0 || year % 400 == 0)
	{
		printf("%d is a leap year.\n", year);
	}
	else
	{
		printf("%d is not a leap year.\n", year);
	}

	return 0;
}
