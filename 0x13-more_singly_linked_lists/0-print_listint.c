#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "lists.h"

/**
 *print_listint - a function that prints all the elements 
 *@h: node pointer
 *Return: returns the number of nodes
 */
size_t print_listint(const listint_t *h)

{
size_t l = 0;
if (h == NULL)
return (0);
while (h != NULL)
{
printf("%d\n", h->n);
h = h->next;
l++;
}
return (l);
}
