#ifndef LISTS_H
#define LISTS_H

#include <stdlib.h>

/**
<<<<<<< HEAD
 * struct listint_s - singly linked list
 * @n: integer
 * @next: points to the next node
 *
 * Description: singly linked list node structure
 * for Holberton project
 */
typedef struct listint_s
{
	int n;
	struct listint_s *next;
=======
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
>>>>>>> 97ab5cfac4027e78d1823c9b2df400a6b127f5fe
} listint_t;

size_t print_listint(const listint_t *h);
listint_t *add_nodeint(listint_t **head, const int n);
void free_listint(listint_t *head);
int check_cycle(listint_t *list);

#endif /* LISTS_H */

