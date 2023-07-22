#include <stdio.h>
#include <stdlib.h>
#include "main.h"

void add_at_index(mylist **head, int index, int val)
{
	mylist *ptr = *head;
	mylist *new_list;
	int i = 1;

	if (index == 1)
	{
		ptr = *head;
		new_list = malloc(sizeof(mylist));
		new_list->val = val;
		new_list->next = ptr;
		*head = new_list;
	}
	else
	{
		while (i <= index && ptr->next)
		{
			if (i == index - 1)
			{
				new_list = malloc(sizeof(mylist));
				new_list->val = val;
				new_list->next = ptr->next;
				ptr->next = new_list;
			}
			i++;
			ptr = ptr->next;
		}
	}
}
