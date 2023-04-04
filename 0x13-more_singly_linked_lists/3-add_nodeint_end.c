#include "lists.h"

/**
 * add_nodeint_end - adds a node at the end of a linked list
 * @head: points to the first element in the list
 * @n: data inserted in the new element
 * Return: pointer to new node, or NULL if it fails
 */

listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *newNode;
	listint_t *temp;

	temp = *head;
	newNode = malloc(sizeof(listint_t));
	if (newNode == NULL)
		return (NULL);

	newNode->n = n;
	newNode->next = NULL;
	if (temp == NULL)
	{
		*head = newNode;
		return (newNode);
	}

	while (temp->next != NULL)
	temp = temp->next;
	temp->next = newNode;
	return (newNode);
}
