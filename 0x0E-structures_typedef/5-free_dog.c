#include "dog.h"

/**
 * free_dog - frees dogs that was allocated in the heap
 * @d: poiter pointing to struct d
 */
void free_dog(dog_t *d)
{
	if (d == NULL)
		return;
	free(d->name);
	free(d->owner);
	free(d);
}
