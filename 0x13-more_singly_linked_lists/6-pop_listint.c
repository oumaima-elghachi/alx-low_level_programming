#include "lists.h"

/**
 * pop_listint - deletes the head node of a linked list
 * @a: pointer to the first element in the linked list
 *
 * Return: the data inside the elements that was deleted,
 * or 0 if the list is empty
 */
int pop_listint(listint_t **a)
{
    listint_t *temp;
    int num;

    if (!head || !*a)
        return (0);

    num = (*a)->n;
    temp = (*a)->next;
    free(*a);
    *a = temp;

    return (num);
}
