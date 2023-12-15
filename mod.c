#include "monty.h"
/**
 * f_mod - Calculates the modulus of the second and first values 
 * @head: stack head
 * @counter: line_number
 * Return: None
*/
void f_mod(stack_t **head, unsigned int counter)
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
		fprintf(stderr, "L%d: can't mod, stack too short\n", counter);
		fclose(bus.file);
		free(bus.content);
		free_stack(*head);
		exit(EXIT_FAILURE);
	}
	h = *head;
	if (h->n == 0)
	{
		fprintf(stderr, "L%d: division by zero\n", counter);
		fclose(bus.file);
		free(bus.content);
		free_stack(*head);
		exit(EXIT_FAILURE);
	}
	hol = h->next->n % h->n;
	h->next->n = hol;
	*head = h->next;
	free(h);
}