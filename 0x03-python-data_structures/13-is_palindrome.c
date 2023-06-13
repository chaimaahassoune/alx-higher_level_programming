#include <stdlib.h>
#include "lists.h"

/**
 * reverse_list - Reverses a linked list.
 * @head: Pointer to the head of the linked list.
 *
 * Return: Pointer to the new head of the reversed list.
 *
 */
listint_t *reverse_list(listint_t **head)
{
	int_t *prev = NULL, *current = *head, *next = NULL;


	while (current != NULL)
	{
		next = current->next;
		current->next = prev;
		prev = current;
		current = next;
	}
	return (prev);
}
/**
 * compare_lists - Compares two linked lists.
 * @head1: Pointer to the head of the first linked list.
 * @head2: Pointer to the head of the second linked list.
 *
 * Return: 1 if the lists are identical, 0 otherwise.
 */
int compare_lists(listint_t *head1, listint_t *head2)
{
	while (head1 != NULL && head2 != NULL)
	{
		if (head1->n != head2->n)
			return (0);
		head1 = head1->next;
		head2 = head2->next;
	}

	return (head1 == NULL && head2 == NULL);
}
/**
 * is_palindrome - checks if a singly linked list is a palindrome
 * @head: pointer to the head of the list
 * Return: 1 if the list is a palindrome, 0 otherwise
 */
int is_palindrome(listint_t **head)
{
	listint_t *slow_ptr = *head, *fast_ptr = *head, *prev_slow_ptr = *head;
	listint_t *second_half, *middle_node = NULL;
	int result;

	if (*head != NULL && (*head)->next != NULL)
	{
		while (fast_ptr != NULL && fast_ptr->next != NULL)
		{
			fast_ptr = fast_ptr->next->next;
			prev_slow_ptr = slow_ptr;
		}

		if (fast_ptr != NULL)
		{
			middle_node = slow_ptr;
			slow_ptr = slow_ptr->next;
		}
		second_half = slow_ptr;
		prev_slow_ptr->next = NULL;
		second_half = reverse_list(&second_half);

		result = compare_lists(*head, second_half);
		second_half = reverse_list(&second_half);
		if (middle_node != NULL)
		{
			prev_slow_ptr->next = middle_node;
			middle_node->next = second_half;
		}
		else
			prev_slow_ptr->next = second_half;
		return (result);
	}

	return (1);
}



