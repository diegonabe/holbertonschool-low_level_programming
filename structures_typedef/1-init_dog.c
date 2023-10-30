#include "dog.h"
#include <stddef.h>

/**
 * init_dog - Inicializa una estructura dog
 * @d: estructura dog
 * @name: El nombre de dog
 * @age: La edad de dog
 * @owner: El dueño de dog
 *
 * Return: 0
 */
void init_dog(struct dog *d, char *name, float age, char *owner)
{
	if (d != NULL)
	{
		d->name = name;
		d->age = age;
		d->owner = owner;
	}
}

