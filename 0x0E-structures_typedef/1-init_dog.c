#include "dog.h"

/**
  * init_dog -intializes dog details.
  *
  *@d:
  *
  *@name:
  *
  *@age:
  *
  *@owner:
  *
  *Return:
  */
void init_dog(struct dog *d, char *name, float age, char *owner)
{
	if (d)
	{
		d->name = name;
		d->age = age;
		d->owner = owner;
	}
}

