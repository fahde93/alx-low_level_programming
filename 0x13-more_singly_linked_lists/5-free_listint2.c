#include "lists.h"
<<<<<<< HEAD
/**
 * free_listint2 - that frees a listint_t list.
 * @head: is the input of the list
*/
=======

/**
 * free_listint2 - frees a linked list
 * @head: pointer to the head of the list
 * Return: void
 */

>>>>>>> 38c749ff51b52cb0f99c4795af588de83f3bb5c4
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
