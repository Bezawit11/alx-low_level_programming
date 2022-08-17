#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "lists.h"

/**
 *sum_listint -  returns the sum of all the data (n)
 *@head: linked list
 *Return: sum of data
 */
int sum_listint(listint_t *head)

{
int i, s = 0;
listint_t *temp;
temp = head;
if (temp == NULL)
return (0);
while (temp != NULL)
{
i = temp->n;
s = s + i;
temp = temp->next;
}
return (s);
}
