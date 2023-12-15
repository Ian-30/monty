#include "monty.h"
/**
 * addnode - Add node to the head stack
 * @head: head of the stack
 * @n: new_value
 * Return: None
*/
void addnode(stack_t **head, int n)
{

	stack_t *new_node, *hol;

	hol = *head;
	new_node = malloc(sizeof(stack_t));
	if (new_node == NULL)
	{ printf("Error\n");
		exit(0); }
	if (hol)
		hol->prev = new_node;
	new_node->n = n;
	new_node->next = *head;
	new_node->prev = NULL;
	*head = new_node;
}
