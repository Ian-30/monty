#include "monty.h"
/**
 * f_queue - Prints from the top
 * @head: stack head
 * @index: line_number
 * Return: None
*/
void f_queue(stack_t **head, unsigned int index)
{
	(void)head;
	(void)index;
	bus.lifi = 1;
}

/**
 * addqueue - Adds a node to the tail stack
 * @n: new_value
 * @head: head of the stack
 * Return: None
*/
void addqueue(stack_t **head, int n)
{
	stack_t *new_node, *hol;

	hol = *head;
	new_node = malloc(sizeof(stack_t));
	if (new_node == NULL)
	{
		printf("Error\n");
	}
	new_node->n = n;
	new_node->next = NULL;
	if (hol)
	{
		while (hol->next)
			hol = hol->next;
	}
	if (!hol)
	{
		*head = new_node;
		new_node->prev = NULL;
	}
	else
	{
		hol->next = new_node;
		new_node->prev = hol;
	}
}
