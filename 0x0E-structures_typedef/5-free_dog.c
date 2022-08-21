#include <stdio.h>
#include <stdlib.h>
#include "dog.h"

/**
 *free_dog - frees memory
 *@d: structure pointer
 *Return: void
 */
void free_dog(dog_t *d)

{
if (d == NULL)
return;
if (d != NULL)
free(d->name);
free(d->owner);
free(d);
}
