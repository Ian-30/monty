#include "monty.h"
/**
  *f_rotr- Rotates a stack to the bottom
  *@head: stack head
  *@index: line_number
  *Return: None
 */
void f_rotr(stack_t **head, __attribute__((unused)) unsigned int index)
{
	stack_t *mov;

	mov = *head;
	if (*head == NULL || (*head)->next == NULL)
	{
		return;
	}
	while (mov->next)
	{
		mov = mov->next;
	}
	mov->next = *head;
	mov->prev->next = NULL;
	mov->prev = NULL;
	(*head)->prev = mov;
	(*head) = mov;
}
