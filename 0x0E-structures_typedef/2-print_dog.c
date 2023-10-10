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
	else
	{

		if (d->name == NULL)
			printf("Name: (nil)");
		else if (d->owner == NULL)
			printf("owner: (nil)");

		printf("Name: %s\n", d->name);
		printf("Age: %.1f\n", d->age);
		printf("Owner: %s\n", d->owner);
	}
}
