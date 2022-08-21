#include <stdio.h>
#include <stdlib.h>
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
dog_t *p;
int i, a = 0, b = 0;
p = malloc(sizeof(dog_t));
if (p == NULL)
{
free(p);
return (NULL);
}
while (name[a] != '\0')
{
a++;
}
while (owner[b] != '\0')
{
b++;
}
p->age = age;
p->name = malloc(a * sizeof(p->name));
if (p->name == NULL)
{
free(p->name);
free(p);
return (NULL);
}
for (i = 0, i <= a; i++)
{
p->name[i] = name[i];
}
p->owner = malloc(b * sizeof(p->owner));
if (p->owner == NULL)
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
