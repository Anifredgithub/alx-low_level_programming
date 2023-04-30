#include "lists.h"

/**
 * add_nodeint - adds a new new node to the beginning of the list
 * @head: a pointer to the address at the head of the list
 * @n: the integer for the new node to contain
 * Return: the address of the new element, or NULL if it failed
 */

listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *new;

	new = malloc(sizeof(listint_t));
	if (new == NULL)
		return (NULL);

	new->n = n;
	new->next = *head;

	*head = new;

	return (new);
}
