#include "dog.h"
#include <stdlib.h>
/**
 * free_dog - free memory of structure dogs
 * @d: pointer of structure to dog_t
 *
 * Return: On success 1.
 * On error, -1 is returned, and error is set appropriately.
 */
void free_dog(dog_t *d)
{
	if (d != 0)
	{
		free(d->name);
		free(d->owner);
		free(d);
	}
}
