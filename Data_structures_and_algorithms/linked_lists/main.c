#include <stdio.h>
#include <stdlib.h>
#include "main.h"

int main()
{
	mylist *head = NULL;
	int i = 0;
	while (i < 10)
	{
		add_beginning(&head, i);
		i++;
	}
	print_list(head);
	while (i > 0)
		add_beginning(&head, i--);
	print_list(head);
	return (0);
}
