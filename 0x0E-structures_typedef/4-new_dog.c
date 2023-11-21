#include "dog.h"
#include <string.h>
#include <stdlib.h>
/**
  * new_dog - creates a new dog.
  *
  *@name: name of the dog.
  *
  *@age: age of the dog.
  *
  *@owner: owner of the dog.
  *
  *Return: Always 0
  */
dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t *new_dog = malloc(sizeof(dog_t));

	if (new_dog == NULL)
	{
		free(new_dog);
		return (NULL);
	}
	new_dog->name = name;
	new_dog->age = age;
	new_dog->owner = owner;
	free(new_dog);
	return (new_dog);
}
