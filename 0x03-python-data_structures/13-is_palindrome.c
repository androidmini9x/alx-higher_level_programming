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
 * comparator - compare start and end position
 * @head: the linked list
 * @last: the end of the list
 * Return: 1 true, 0 false
 */
int comparator(listint_t **head, listint_t *last)
{
	if (last == NULL)
		return (1);
	if (comparator(head, last->next) && (*head)->n == last->n)
	{
		*head = (*head)->next;
		return (1);
	}
	return (0);
}
/**
 * is_palindrome - checks if a singly linked list is a palindrome
 * @head: pointer to head of list
 * Return: 0 if it is not a palindrome, 1 if it is a palindrome
 */
int is_palindrome(listint_t **head)
{
	if (*head == NULL || (*head)->next == NULL)
		return (1);

	return (comparator(head, *head));
}
