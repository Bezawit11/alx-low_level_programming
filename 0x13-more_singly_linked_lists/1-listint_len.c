#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "lists.h"

/**
 *listint_len - returns the number of elements
 *@h: linked list
 *Return: number of elements
 */
size_t listint_len(const listint_t *h)

{
size_t l = 0;
while (h != NULL)
{
h = h->next;
l++;
}
return (l);
}
