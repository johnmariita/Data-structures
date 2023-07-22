#ifndef LIST_H
#define LIST_H

typedef struct mylist{
	int val;
	struct mylist *next;
}mylist;
void add_beginning(mylist **head, int value);
void add_end(mylist **head, int value);
void add_at_index(mylist **head, int index, int val);
void print_list(mylist *head);
#endif
