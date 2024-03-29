#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "lists.h"

/**
 *add_node - prints all the elements
 *@head: node pointer
 *@str: constant char
 *Return: returns node pointer
 */
list_t *add_node(list_t **head, const char *str)

{
list_t *new;
unsigned int l = 0;
while (str[l])
{
l++;
}
new = malloc(sizeof(list_t));
if (new == NULL)
return (NULL);
new->str = strdup(str);
new->next = *head;
new->len = l;
*head = new;
return (*head);
}
