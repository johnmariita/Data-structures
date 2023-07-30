#include <stdio.h>
#include "main.h"

int nodes(mylist* head)
{
	int i = 1;
	if (head == NULL)
		return (0);
	while (head->next)
	{
		i++;
		head = head->next;
	}
	return (i);
}
