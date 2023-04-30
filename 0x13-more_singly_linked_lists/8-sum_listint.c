#include "lists.h"

/**
 *sum_listint - calculates the sum of all the data (n) in a linked list
 * @head: head node in a linked list
 * Return: the sum of all the data, or 0 if the list is empty
 */

int sum_listint(listint_t *head)
{
	int sum = 0;
	listint_t *tmp = head;

	while (tmp)
	{
		sum += tmp->n;
		tmp = tmp->next;
	}

	return (sum);
}
