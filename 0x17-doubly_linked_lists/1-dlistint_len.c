#include <stdio.h>
#include "lists.h"

/**
 *dlistint_len - a function that returns the number of elements in a list
 *@h: doubly linked list
 *Return: returns no of elements
 */
size_t dlistint_len(const dlistint_t *h)

{
size_t i = 0;
while (h != NULL)
{
i++;
h = h->next;
}
return (i);
}
