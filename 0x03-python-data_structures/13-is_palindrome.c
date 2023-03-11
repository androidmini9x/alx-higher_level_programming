#include "lists.h"
/**
 * reverse_list - create new reversed list
 * @head: pointer to head of list
 * @newlist: pointer to head of new list
 * Return: new list
 */
void reverse_list(listint_t **newlist, listint_t *head)
{
	if (head == NULL)
	{
		return;
	}
	reverse_list(newlist, head->next);
	add_nodeint_end(newlist, head->n);
}
/**
 * is_palindrome - checks if a singly linked list is a palindrome
 * @head: pointer to head of list
 * Return: 0 if it is not a palindrome, 1 if it is a palindrome
 */
int is_palindrome(listint_t **head)
{
	const listint_t *current, *temp;
	listint_t *newlist = NULL;

	if (*head == NULL || (*head)->next == NULL)
		return (1);

	reverse_list(&newlist, *head);

	current = *head;
	temp = newlist;
	while (current != NULL)
	{
		if (temp->n == current->n)
		{
			temp = temp->next;
			current = current->next;
		}
		else
		{
			return (0);
		}
	}

	free_listint(newlist);
	return (1);
}
