#include "dog.h"
#include <string.h>
#include <stdlib.h>
/**
  * new_dog - creates a new dog.
  *
  *@name:
  *
  *@age:
  *
  *@owner:
  *
  *Return: Always 0
  */
dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t *new_dog = malloc(sizeof(dog_t));

	if (new_dog == NULL)
	{
		return (NULL);
	}
	new_dog->name = strdup(name);
	new_dog->age = age;
	new_dog->owner = strdup(owner);
	return (new_dog);
}
