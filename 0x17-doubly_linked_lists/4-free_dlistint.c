#include <stdio.h>
#include <stdlib.h>
#include "lists.h"

/**
 *
 *
 *
 */
void free_dlistint(dlistint_t *head)

{
dlistint_t *s, *d;
s = head;
while (s != NULL)
{
d = s->next;
free(s);
s = d;
}
}
