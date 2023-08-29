#include "lists.h"
/**
 * pop_listint - A function that deletes
 * the head node of a listint_t
 * @head: is the Input list
 * Return: deleted the Content
*/
int pop_listint(listint_t **head)
{
	listint_t *tmp;
	int i;

	if (*head == NULL)
		return (0);

	i = (*head)->n;
	tmp = *head;
	*head = (*head)->next;
	free(tmp);
	return (i);
}
