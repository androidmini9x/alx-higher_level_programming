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
 * reverse_list_new - reverse list
 * @head: pointer to head of list
 * Return: reversed list
 */
void reverse_list_new(listint_t **head)
{
	listint_t *prev = NULL;
	listint_t *current = *head;
	listint_t *next = NULL;

	while (current)
	{
		next = current->next;
		current->next = prev;
		prev = current;
		current = next;
	}

	*head = prev;
}
/**
 * is_palindrome - checks if a singly linked list is a palindrome
 * @head: pointer to head of list
 * Return: 0 if it is not a palindrome, 1 if it is a palindrome
 */
int is_palindrome(listint_t **head)
{
	listint_t *current, *temp;

	if (*head == NULL || (*head)->next == NULL)
		return (1);

	temp = *head;
	reverse_list_new(&temp);
	current = *head;

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

	if (!temp)
		return (1);

	return (0);
}
