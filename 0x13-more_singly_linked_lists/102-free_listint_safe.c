#include "lists.h"
/**
 * free_listint_safe -  that frees a listint_t list.
 * @h: the input list
 * Return: the number nodes
 */
size_t free_listint_safe(listint_t **h)
{
	listint_t *slow, *fast, *temp;
	size_t count = 0;

	if (h == NULL)
		return (0);

	slow = *h;
	fast = *h;

	while (fast && fast->next)
	{
		slow = slow->next;
		fast = fast->next->next;

		if (slow == fast)
		{
			slow = *h;
			while (slow != fast)
			{
				slow = slow->next;
				fast = fast->next;
			}

			temp = fast;
			while (temp->next != fast)
				temp = temp->next;
			temp->next = NULL;
		}
	}

	while (*h != NULL)
	{
		temp = *h;
		*h = (*h)->next;
		free(temp);
		count++;
	}

	return (count);
}
