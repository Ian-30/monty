#include "monty.h"
/**
 * f_pop - Prints the top value of a stack
 * @head: stack head
 * @index: line_number
 * Return: None
*/
void f_pop(stack_t **head, unsigned int index)
{
	stack_t *h;

	if (*head == NULL)
	{
		fprintf(stderr, "L%d: can't pop an empty stack\n", index);
		fclose(bus.file);
		free(bus.content);
		free_stack(*head);
		exit(EXIT_FAILURE);
	}
	h = *head;
	*head = h->next;
	free(h);
}
