#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "lists.h"

/**
* checkPalindrome - Function check a palindrome
*
* @left: pointer to left list
*
* @right: pointer to right list
*
* Return: res
*
*/


int checkPalindrome(listint_t **left, listint_t  *right)
{
	int res;

	if (right == NULL)
		return (1);

	res = checkPalindrome(left, right->next) && ((*left)->n == right->n);
	(*left) = (*left)->next;

	return (res);
}

/**
 * is_palindrome - Function checks if a singly linked list is a palindrome
 *
 * @head: Pointer to the head node(Initial).
 *
 * Return: 0.
*/

int is_palindrome(listint_t **head)
{
	return (checkPalindrome(head, *head));
}
