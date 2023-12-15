#include "monty.h"
/**
  *f_sub- Subtracts first two values of a stack
  *@head: stack head
  *@index: line_number
  *Return: None
 */
void f_sub(stack_t **head, unsigned int index)
{
	stack_t *hol;
	int ace, nodes;

	hol = *head;
	for (nodes = 0; hol != NULL; nodes++)
		hol = hol->next;
	if (nodes < 2)
	{
		fprintf(stderr, "L%d: can't sub, stack too short\n", index);
		fclose(bus.file);
		free(bus.content);
		free_stack(*head);
		exit(EXIT_FAILURE);
	}
	hol = *head;
	ace = hol->next->n - hol->n;
	hol->next->n = ace;
	*head = hol->next;
	free(hol);
}
