#include "lists.h"
/**
 * insert_dnodeint_at_index - inserts a node at an index.
 *
 *@h: head pointer.
 *
 *@idx: index to insert a node.
 *
 *@n: node data.
 *
 *Return: Pointer to the newly inserted node or NULL if it fails.
 */
dlistint_t *insert_dnodeint_at_index(dlistint_t **h, unsigned int idx, int n)
{
	dlistint_t *temp = *h; /*Iternode - node to iterate with/ traverse*/
	dlistint_t *insertnode = malloc(sizeof(dlistint_t));
	unsigned int i = 0, num = 0;


	if (insertnode == NULL)
		return (NULL);
	if (*h == NULL)
		return (NULL);
	while (*h != NULL)
	{
		num++;
		(*h) = (*h)->next;
	}
	if (idx > num)
		return (NULL);
	while (i < idx)
	{
		temp = temp->next;
		i++;
	}
	insertnode->n = n;
	insertnode->prev = temp->next->prev;
	insertnode->next = temp->next;
	return (insertnode);
}
