#include "dog.h"
#include <stddef.h>
#include <stdio.h>
/**
 * print_dog - prints a struct dog
 * @d: ptr to the struct dog
 */
void print_dog(struct dog *d)
{
	if (d != NULL)
	{
		printf("name: %s\n", d->name != NULL ? d->name : ("nil"));
		printf("Age: %f\n", d->age);
		printf("owner: %s\n", d->owner != NULL ? d->owner : ("nil"));
	}
}
