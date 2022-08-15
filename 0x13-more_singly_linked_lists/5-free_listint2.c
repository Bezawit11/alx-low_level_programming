#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "lists.h"

/**
 *
 *
 *
 */
void free_listint2(listint_t **head)

{
listint_t *d;
if (head != NULL)
{
if (*head != NULL)
{
while (*head != NULL)
{
d = *head;
*head = *(head)->next;
free(*d);
}
}
}
