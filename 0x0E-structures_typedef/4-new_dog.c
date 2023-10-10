#include "dog.h"
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
	new_dog = malloc(sizeof((name) + (owner)));
	if (new_dog == NULL)
	{
		return (NULL);
	}
	strcpy(new_dog, dog_t);
	return (0);
}
