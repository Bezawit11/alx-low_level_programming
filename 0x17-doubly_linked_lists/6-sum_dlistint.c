#include <stdio.h>
#include "lists.h"

/**
 *sum_dlistint - returns the sum of all the data (n) of a list
 *@head: doubly linked list
 *Return: returns sum
 */
int sum_dlistint(dlistint_t *head)

{
int sum = 0;
dlistint_t *new = head;
if (head == NULL)
return (sum);
while (new != NULL)
{
sum += new->n;
new = new->next;
}
return (sum);
}
