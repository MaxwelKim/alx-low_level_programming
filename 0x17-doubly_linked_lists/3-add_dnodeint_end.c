#include "lists.h"

/**
 * add_dnodeint_end - adds new node in the end of a dlistint_t list.
 * @head: pointer to first element of the list.
 * @n: integer to set in the new node.
 * Return: address of new element, NULL if it failed
 **/
dlistint_t *add_dnodeint_end(dlistint_t **head, const int n)
{
	dlistint_t *new, *aux = *head;

	new = malloc(sizeof(dlistint_t));
	if (new == NULL)
		return (NULL);
	new->n = n;
	new->next = NULL;

	if (aux)
	{
		while (aux->next)
			aux = aux->next;
		new->prev = aux;
		aux->next = new;
	}
	else
	{
		*head = new;
		new->prev = NULL;
	}

	return (new);
}
