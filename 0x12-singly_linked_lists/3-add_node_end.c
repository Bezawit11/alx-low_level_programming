#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "lists.h"

/**
 *add_node_end - adds new node at the end
 *@head: node pointer
 *@str: constant char
 *Return: returns node pointer
 */
list_t *add_node_end(list_t **head, const char *str)
{
list_t *new, *temp;
unsigned int l = 0;
if (str == NULL)
return (NULL);
while (str[l] != '\0')
{
l++;
}
new = malloc(sizeof(list_t));
if (new == NULL)
return (NULL);
new->str = strdup(str);
new->next = NULL;
new->len = l;
if (*head == NULL)
{
*head = new;
return (new);
}
temp = *head;
while(temp->next != NULL)
{
temp = temp->next;
}
temp->next = new;
return (new);
}
