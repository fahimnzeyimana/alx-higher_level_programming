#ifndef LISTS_H
#define LISTS_H

#include <stdlib.h>

/**
 *truct listint_s -ingly linked list
 * @n: integer
 * @next: points to the next node
 *
 * Description:ingly linked list nodetructure
 * for Holberton project
 */
typedeftruct listint_s
{
	int n;
truct listint_s *next;
} listint_t;

size_t print_listint(const listint_t *h);
listint_t *add_nodeint(listint_t **head, const int n);
void free_listint(listint_t *head);
int check_cycle(listint_t *list);

#endif /* LISTS_H */

