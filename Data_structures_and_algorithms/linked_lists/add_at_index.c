#include <stdio.h>
#include <stdlib.h>
#include "main.h"

void add_at_index(mylist **head, int index, int val)
{
	mylist *ptr = *head;
	mylist *new_list = malloc(sizeof(mylist));
	new_list->val = val;
	new_list->next = NULL;
	int i;
	if (nodes(ptr) + 1 < index)
	{
		printf("requesting addition at index %d whereas we only have %d nodes\n", index, nodes(ptr));
		return;
	}
	if (index == 1)
	{
		new_list->next = ptr;
		*head = new_list;
		return;
	}
	for (i = 0; i < index - 2 && ptr; i++)
		ptr = ptr->next;
	new_list->next = ptr->next;
	ptr->next = new_list;
}
