#include <stdio.h>
#include <stdlib.h>
#include "main.h"

void add_end(mylist **head, int val)
{
	mylist *ptr;
	mylist *new_list;

	if (*head == NULL)
	{
		new_list = malloc(sizeof(mylist));
		new_list->val = val;
		new_list->next = NULL;
	}
	else
	{
		ptr = *head;
		while (ptr->next)
			ptr = ptr->next;
		new_list = malloc(sizeof(mylist));
		new_list->val = val;
		new_list->next = NULL;
		ptr->next = new_list;
	}
}
