#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "dog.h"

/**
 *new_dog - function that creates a new dog
 *@name: new name
 *@age: new age
 *@owner: new owner
 *Return: returns a pointer
 */
dog_t *new_dog(char *name, float age, char *owner)

{
int a, b, i;
dog_t *p;
a = strlen(name);
b = strlen(owner);
p = malloc(sizeof(dog_t));
if (p == NULL)
{
free(p);
return (NULL);
}
p->name = malloc(a * sizeof(p->name));
if (p->name == NULL)
{
free(p->name);
free(p);
return (NULL);
}
for (i = 0; i <= a; i++)
{
p->name[i] = name[i];
}
p->age = age;
if (p->owner)
{
free(p->owner);
free(p->name);
free(p);
return (NULL);
}
for (i = 0; i <= b; i++)
{
p->owner[i] = owner[i];
}
return (p);
}
