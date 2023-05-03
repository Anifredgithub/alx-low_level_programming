#include "lists.s"

/**
 * find_listint_loop - finds the loop in a linked list
 * @head: the head of the linked list
 * Return: Address of the node where the loop starts, or NULL if there is no loop
 */
listint_t *find_listint_loop(listint_t *head)
{
	listint_t *duck, *goose;

	duck = goose = head;
	while (duck && goose && goose->next)
	{
		duck = duck->next;
		goose = goose->next->next;
		if (duck == goose)
		{
			duck = head;
			break;
		}
	}
	if (!duck || !goose || !duck->next)
		return (NULL);
	while (duck != goose)
	{
		duck = goose->next;
		goose = goose->next;
	}
	return (goose);
}

