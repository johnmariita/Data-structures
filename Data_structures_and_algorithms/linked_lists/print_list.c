#include <stdio.h>
#include <stdlib.h>
#include "main.h"

void print_list(mylist *head)
{
	while (head)
	{
		printf("%d ", head->val);
		head = head->next;
	}
	printf("\n");
}
