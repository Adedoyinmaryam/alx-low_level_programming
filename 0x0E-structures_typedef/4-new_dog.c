#include "dog.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
/**
 * new_dog - Creates a new dog with copied name and owner
 * @name: Name to assign to the dog
 * @age: Age to assign to the dog
 * @owner: Owner to assign to the dog
 * Return: Pointer to the newly created dog, or NULL if it fails
 */
dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t *new_dog = malloc(sizeof(dog_t));

	if (new_dog == NULL)
	{
		return (NULL);
	}
	new_dog->name = strdup(name);
	new_dog->owner = strdup(owner);
	new_dog->age = age;
	if (new_dog->name == NULL || new_dog->owner == NULL)
	{
		free(new_dog->name);
		free(new_dog->owner);
		free(new_dog);
		return (NULL);
	}
	return (new_dog);
}
