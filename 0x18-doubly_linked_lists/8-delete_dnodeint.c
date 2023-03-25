#include "lists.h"

/**
 * delete_dnodeint_at_index - deletes node at index of a dlistint_t linked list
 * @head: head of list
 * @index: node to delete
 * Return: 1 success, -1 failure
 */
int delete_dnodeint_at_index(dlistint_t **head, unsigned int index)
{
	dlistint_t *temp;
	dlistint_t *nodeToDelete;
	unsigned int i = 0;

	if (*head == NULL || head == NULL)
		return (-1);

	temp = *head;
	if (index == 0)
	{
		if (temp->next)
		{
			*head = temp->next;
			(*head)->prev = NULL;
		}
		else
			*head = NULL;

		free(temp);
		return (1);
	}

	while (temp && i < index - 1)
	{
		temp = temp->next;
		i++;
	}

	if (temp == NULL)
		return (-1);

	nodeToDelete = temp->next;
	temp->next = nodeToDelete->next;
	if (nodeToDelete->next)
		nodeToDelete->next->prev = temp;
	free(nodeToDelete);

	return (1);
}
