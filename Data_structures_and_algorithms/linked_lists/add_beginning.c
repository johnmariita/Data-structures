#include <stdio.h>
#include <stdlib.h>
#include "main.h"

void add_beginning(mylist **head, int value)
{
	mylist *new_list = NULL;
	mylist *ptr;

	ptr = *head;
	new_list = malloc(sizeof(mylist));
	new_list->val = value;
	new_list->next = ptr;
	*head = new_list;
}
