#include <stdlib.h>
#include "dog.h"

/**
 * init_dog - print
 * @d: pointer
 * @name: string
 * @age: float
 * @owner: string2
 */
void init_dog(struct dog *d, char *name, float age, char *owner)
{
        if (d)
        {
                d->name = name;
                d->age = age;
                d->owner = owner;
        }
}
