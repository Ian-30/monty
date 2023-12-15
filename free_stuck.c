#include "monty.h"
/**
* free_stack - Frees a doubly linked list
* @head: head of the stack
*/
void free_stack(stack_t *head)
{
	stack_t *hol;

	hol = head;
	while (head)
	{
		hol = head->next;
		free(head);
		head = hol;
	}
}
