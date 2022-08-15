#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "lists.h"

/**
 *
 *
 */
int sum_listint(listint_t *head)

{
int i, s = 0;
listint_t *temp;
temp = head;
while (temp->next != NULL)
{
temp = temp->next;
i = temp->n;
s = s + i;
}
return (s);
}
