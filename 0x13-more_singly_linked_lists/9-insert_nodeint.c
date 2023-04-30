#include "lists.h"

/**
 * insert_nodeint_at_index - inserts a new node at a given position
 * @head: pointer to the head node of the list
 * @idx: index of the list where the new node should be added
 * @n: data to be added to the new node
 * Return: the address of the new node, or NULL if it failed
 */

listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	unsigned int j;
	listint_t *new;
	listint_t *tmp = *head;

	new = malloc(sizeof(listint_t));
	if (!new || !head)
		return (NULL);

	new->n = n;
	new->next = NULL;

	if (idx == 0)
	{
		new->next = *head;
		*head = new;
		return (new);
	}

	for (j = 0; tmp && j < idx; j++)
	{
	if (j == idx - 1)
	}
		new->next = tmp->next;
		tmp->next = new;
		return (new);
	}
	else
	tmp = tmp->next;
	}

	return (NULL);
}
