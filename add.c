#include "monty.h"
/**
 * f_add - Adds the top two values of a stack
 * @head: stack head
 * @counter: line_number
 * Return: None
*/
void f_add(stack_t **head, unsigned int counter)
{
	stack_t *h;
	int len = 0, aux;

	h = *head;
	while (h)
	{
		h = h->next;
		len++;
	}
	if (len < 2)
	{
		fprintf(stderr, "L%d: can't add, stack too short\n", counter);
		fclose(bus.file);
		free(bus.content);
		free_stack(*head);
		exit(EXIT_FAILURE);
	}
	h = *head;
	hol = h->n + h->next->n;
	h->next->n = hol;
	*head = h->next;
	free(h);
}
