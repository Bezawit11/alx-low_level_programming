#ifndef DOG_STRUCT
#define DOG_STRUCT

/**
 *struct dog - data for a dog
 *@name: pointer to dog's name
 *@age: pointer to the age of the dog
 *@owner: pointer to the name of the dog's owner
 */

typedef struct dog
{
char *name;
float age;
char *owner;
}dog_t;

void init_dog(struct dog *d, char *name, float age, char *owner);
void print_dog(struct dog *d);
typedef struct dog dog_t;
#endif
