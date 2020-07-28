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
	new_node = number;

	if (*head == NULL)
	{
		(*head) = new_node;
		return (*head);
	}

	while (iter->next != NULL)
	{
		iter = iter->next;
		if (iter->next > new_node)
		{
			new_node->next = iter;
			iter = new_node;
		}
		else
		{
			iter->next = new_node;
			new_node->next = NULL;
		}
		iter->next++;
		return (new_node);
	}
	return (0);
}
