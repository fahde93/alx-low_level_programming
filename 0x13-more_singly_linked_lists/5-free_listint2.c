#include "lists.h"
/**
 * free_listint2 - that frees a listint_t list.
 * @head: is the input of the list
*/
void free_listint2(listint_t **head)
{
	listint_t *gone;

	if (head == NULL)
		return;

	while (*head)
	{
		gone = *head;
		*head = (*head)->next;
		free(gone);
	}
	*head = NULL;
}
