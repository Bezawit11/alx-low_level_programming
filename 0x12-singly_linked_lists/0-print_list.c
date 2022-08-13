#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "lists.h"

/**
 *
 *
 *
 */
size_t print_list(const list_t *h)

{
size_t l = 0;
while (h != NULL)
{
printf("[%d]", h->len);
printf("%s\n", h->str);
h = h->next;
l++;
}
return (l);
}
