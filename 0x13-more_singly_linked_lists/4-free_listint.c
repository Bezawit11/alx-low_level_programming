#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "lists.h"

/**
 *
 *
 */
void free_listint(listint_t *head)

{
listint_t *s, *d;
s = head;
while (s != NULL)
{
d = s->next;
free(s);
s = d;
}
}
