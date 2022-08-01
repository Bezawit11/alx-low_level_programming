#include <stdio.h>
#include "dog.h"

/**
 *print_dog -prints a struct dog
 *@d: pointer to a structure
 *Return: returns void
 */
void print_dog(struct dog *d)

{
d = malloc(sizeof(struct dog));
if (d != NULL)
{
printf("Name: %s", d->name);
printf("Age: %f", d->age);
printf("Owner: %s", d->owner);
}
}
