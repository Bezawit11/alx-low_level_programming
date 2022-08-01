#include <stdio.h>
#include <stdlib.h>
#include "dog.h"

/**
 *new_dog - function that creates a new dog
 *@name: new name
 *@age:new age
 *@owner: new owner
 *Return: returns a pointer
 */
dog_t *new_dog(char *name, float age, char *owner)

{
dog_t *p;
p = malloc(sizeof(dog_t));
if (p == NULL)
{
free(p);
return (NULL);
}
if (p->name == NULL)
{
free(p->name);
free(p);
return (NULL);
}
p->name = name;
p->age = age;
if (p->owner)
{
free(p->owner);
free(p->name);
free(p);
return (NULL);
}
p->owner =owner;
return (p);
}
