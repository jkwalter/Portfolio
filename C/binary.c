#include <stdio.h>
#include <stdlib.h>

typedef struct linklist *node;

struct linklist
{
	int digit;
	node next;
};

node push(node list, int value)
{
	node create;

	create = malloc(sizeof(node));
	create->digit = value;
	create->next = list;

	return create;
}

void pop(node list)
{
	node remove;

	while (list != NULL)
	{
		printf("%d", list->digit);
		remove = list;
		list = list->next;
		free(remove);
	}
}

int main(void)
{
	int number;
	node list;

	list = NULL;

	do
	{
		printf("Enter any positive number: ");
		scanf("%d", &number);
	} while (number < 1);

	printf("\n");
	printf("Binary conversion of %d: ", number);

	while (number != 0)
	{
		list = push(list, number % 2);
		number = number / 2;
	}
	
	pop(list);
	
	printf("\n");
 
	return 0;
}
