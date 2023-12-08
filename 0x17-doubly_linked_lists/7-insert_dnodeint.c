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
	dlistint_t *temp;
	dlistint_t *insertnode = malloc(sizeof(dlistint_t));
	unsigned int i = 0, num = 0;

	if (insertnode == NULL)
		return (NULL);
	if (h == NULL || *h == NULL)
	{
		free(insertnode);
		return (NULL);
	}
	temp = *h;
	if (idx == 0)
	{
		insertnode = add_dnodeint(h, n);
		return (insertnode);
	}
	while (temp != NULL)
	{
		num++;
		temp = temp->next;
	}
	if (idx > num)
	{
		free(insertnode);
		return (NULL);
	}
	temp = *h;
	while (i < idx - 1)
	{
		temp = temp->next;
		i++;
	}
	insertnode->n = n;
	if (temp->next == NULL)
	{
		insertnode = add_dnodeint_end(h, n);
		return (insertnode);
	}
	insertnode->prev = temp->next->prev;
	insertnode->next = temp->next;
	temp->next = insertnode;
	temp->next->prev = insertnode;
	return (insertnode);
}
