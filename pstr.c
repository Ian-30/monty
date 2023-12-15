#include "monty.h"
/**
 * f_pstr - Prints the string starting at the top of a stack,
 * followed by a new line
 * @head: stack head
 * @index: line_number
 * Return: None
*/
void f_pstr(stack_t **head, unsigned int index)
{
	stack_t *h;
	(void)index;

	h = *head;
	while (h)
	{
		if (h->n > 127 || h->n <= 0)
		{
			break;
		}
		printf("%c", h->n);
		h = h->next;
	}
	printf("\n");
}
