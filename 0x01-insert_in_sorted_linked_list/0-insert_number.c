#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "lists.h"

/**
 * insert_node - Function insert node
 *
 * @head: Pointer to the head node(Initial).
 * @number:  Data type.
 *
 * Return: new_node.
*/

listint_t *insert_node(listint_t **head, int number)

{
	listint_t *iter = *head;

	listint_t *new_node = malloc(sizeof(listint_t));


	if (new_node == NULL)
		return (NULL);


	new_node->next = NULL;
	new_node->n = number;

	if (*head == NULL)
	{
		(*head) = new_node;
		return (*head);
	}

	if ((*head)->n > new_node->n)
	{
		new_node->next = (*head);
		*head = new_node;
		return (*head);
	}

	while (iter->next != NULL)
	{
		if (iter->next->n > new_node->n)
		{
			new_node->next = iter->next;
			iter->next = new_node;
			return (iter->next);
		}
		iter = iter->next;
	}
		iter->next = new_node;
		return (new_node);
}
