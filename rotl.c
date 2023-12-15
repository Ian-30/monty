#include "monty.h"
/**
  *f_rotl- Rotates the stack to the top
  *@head: stack head
  *@index: line_number
  *Return: None
 */
void f_rotl(stack_t **head,  __attribute__((unused)) unsigned int index)
{
	stack_t *tmp = *head, *hol;

	if (*head == NULL || (*head)->next == NULL)
	{
		return;
	}
	hol = (*head)->next;
	hol->prev = NULL;
	while (tmp->next != NULL)
	{
		tmp = tmp->next;
	}
	tmp->next = *head;
	(*head)->next = NULL;
	(*head)->prev = tmp;
	(*head) = hol;
}
