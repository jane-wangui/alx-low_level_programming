#include <stdio.h>
#include "dog.h"
/**
  * init_dog - function to initialize the dog struct
  * @d: pointer to type dog
  * @name: name of the dog pointer
  * @age: age of the dog pointer
  * @owner: owner of the dog pointer
  * Return: void
  */
void init_dog(struct dog *d, char *name, float age, char *owner)
{
	if ( d == null)
		;
	else
	{
		d->name = name;
		d->age = age;
		d->owner = owner;
	}
