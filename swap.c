#include "monty.h"
/**
 * f_swap - Interchanges the first two values of a stack
 * @head: stack head
 * @index: line_number
 * Return: None
*/
void f_swap(stack_t **head, unsigned int index)
{
	stack_t *h;
	int len = 0, hol;

	h = *head;
	while (h)
	{
		h = h->next;
		len++;
	}
	if (len < 2)
	{
		fprintf(stderr, "L%d: can't swap, stack too short\n", index);
		fclose(bus.file);
		free(bus.content);
		free_stack(*head);
		exit(EXIT_FAILURE);
	}
	h = *head;
	hol = h->n;
	h->n = h->next->n;
	h->next->n = hol;
}
