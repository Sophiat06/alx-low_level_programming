#include "dog.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * print_dog - prints a struct dog
 * @d: dog to be printed
 */
void print_dog(struct dog *d)
{
	if (d == NULL)
		return;
	if (d->name == NULL)
		printf("Name: (nil)\n");
	if (d->age < 0)
		printf("Age: (nil)\n");
	if (d->owner == NULL)
		printf("Owner: (nil)\n");
	else
		printf("Name: %s\n, Age: %f\n, Owner: %s\n", d->name, d->age, d->owner);
}
