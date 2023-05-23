#include "dog.h"
#include <stdlib.h>

/**
 *_strlen - finds the length of a string
 *@str: input string
 *
 *Return:  length of string
 */

int _strlen(char *str)
{
	int i = 0;

	while (str[i] != '\0')
	{
	i++;
	}
	return (i);
}

/**
 * _strcpy - copies the string from src to dest
 * including '\0'
 * @src: source, string to be copied
 * @dest: destination
 *
 * Return: pointer to dest
 */

char *_strcpy(char *dest, char *src)
{
	int length = 0;
	int i;

	while (src[length] != '\0')
	{
	length++;
	}
	for (i = 0; i < length; i++)
	{
	dest[i] = src[i];
	}
	dest[i] = '\0';
	return (dest);
	}

/**
 * *new_dog - creates a new dog
 * @name: name of the dog
 * @age: age
 * @owner: owner
 *
 * Return: pointer to the new dog
 * otherwise return NULL if function fails
 */

dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t *ndog;

	if (name == NULL || age < 0 || owner == NULL)
	return (NULL);

	ndog = malloc(sizeof(dog_t));
	if (ndog == NULL)
	return (NULL);

	ndog->name = malloc(sizeof(char) * (_strlen(name) + 1));
	if (ndog->name == NULL)
	{
	free(ndog);
	return (NULL);
	}

	ndog->owner = malloc(sizeof(char) * (_strlen(owner) + 1));
	if (ndog->owner == NULL)
	{
		free(ndog->name);
		free(ndog);
		return (NULL);
		}
	ndog->name = _strcpy(ndog->name, name);
	ndog->age = age;
	ndog->owner = _strcpy(ndog->owner, owner);

	return (ndog);
	}
