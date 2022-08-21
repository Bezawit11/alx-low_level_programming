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
p = malloc(sizeof(dog_t));
if (p == NULL)
{
free(name);
free(owner);
free(p);
return (NULL);
}
p->name = name;
p->age = age;
p->owner = owner;
return (p);
}
