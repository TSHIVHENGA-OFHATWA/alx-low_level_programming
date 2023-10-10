#include "dog.h"

/**
 * print_dog - prints a struct dog with names,owner, and age
 * @d: pointer pointing to the struct dog
 */

void print_dog(struct dog *d)
{
	if (d == NULL)
	{
		return;
	}

	if (d->name == NULL)
		printf("Name: (nil)\n");
	else if (d->owner == NULL)
		printf("owner: (nil)\n");

	else if
		printf("Name: %s\n", d->name);
	else if
		printf("Age: %f\n", d->age);
	else if
		printf("Owner: %s\n", d->owner);
}
