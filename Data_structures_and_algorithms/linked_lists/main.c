#include <stdio.h>
#include <stdlib.h>
#include "main.h"

int main()
{
	mylist *head = NULL;
	int i = 0;
	printf("%d nodes\n", nodes(head));
	while (i < 10)
	{
		add_beginning(&head, i);
		i++;
	}
	printf("%d nodes\n", nodes(head));
	print_list(head);
	while (i > 0)
		add_beginning(&head, i--);
	printf("%d nodes\n", nodes(head));
	print_list(head);
	add_at_index(&head, 21, 50);
	printf("%d nodes\n", nodes(head));
	print_list(head);
	return (0);
}
