#include "lists.h"

/**
 * add_dnodeint - adds new node in the beginning of a dlistint_t list.
 * @head: pointer to first element in the list.
 * @n: intger to set the new node.
 * Return: address of new element, NULL if it failed
 **/
dlistint_t *add_dnodeint(dlistint_t **head, const int n)
{
	dlistint_t *new;

	new = malloc(sizeof(dlistint_t));
	if (new == NULL)
		return (NULL);

	new->n = n;
	new->prev = NULL;
	new->next = *head;
	if (*head)
		(*head)->prev = new;
	*head = new;

	return (new);
}
