#include "lists.h"
/**
 * sum_dlistint - returns the sum of all the data.
 *
 *@head: head pointer;
 *
 *Return: sum of node data.
 */
int sum_dlistint(dlistint_t *head)
{
	dlistint_t *temp = head;
	int sum = 0;

	if (head == NULL)
		return (0);
	while (temp)
	{
		sum += temp->n;
		temp = temp->next;
	}
	return (sum);
}
