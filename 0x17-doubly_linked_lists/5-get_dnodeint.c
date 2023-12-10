#include "lists.h"
/**
 * get_dnodeint_at_index - returns the node at an index.
 *
 *@head: head pointer.
 *
 *@index: index of the target node to be returned
 *
 *Return: Target node or NULL if fails.
 */
dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index)
{
	unsigned int count = 0;
	dlistint_t *iter = head;

	if (!iter)
		return (NULL);
	while (!iter->next)
	{
        if (count == index)
            return (iter);
		iter = iter->next;
	}
    return (NULL);
}
