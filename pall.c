#include "monty.h"
/**
 * f_pall - Prints the stack
 * @head: stack head
 * @index: void
 * Return: None
*/
void f_pall(stack_t **head, unsigned int index)
{
	stack_t *h;
	(void)index;

	h = *head;
	if (h == NULL)
		return;
	while (h)
	{
		printf("%d\n", h->n);
		h = h->next;
	}
}
