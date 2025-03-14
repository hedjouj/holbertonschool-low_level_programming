#include <stdio.h>
#include "dog.h"

/**
 * print_dog - print the details of a struct
 * @d: Pointer to the struct dog variable to initialize
 *
 * Description: This function initializes a variable of type struct dog
 * with the provided parameters: name, age, and owner.
 */

void print_dog(struct dog *d)
{
	if (d == NULL)
	{
		return;
	}
	printf("Name: %s\n", d->name ? d->name : "(nil)");
	printf("Age: %f\n", d->age);
	printf("Owner: %s\n", d->owner ? d->owner : "(nil)");
}
