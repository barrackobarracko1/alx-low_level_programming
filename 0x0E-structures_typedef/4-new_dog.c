#include <stdlib.h>
#include "dog.h"

 /**
 * _strlen - this returns the length of a string
 * @s: the string to evaluate
 * Return: length of the string
 */

int _strlen(char *s)
{
	int q;

	q = 0;

	while (s[q] != '\0')
	{
	q++;
	}
	return (q);
}

 /**
 *_strcpy - this copies a string pointed to by src
 * including the terminating null byte (\0)
 * to the buffer pointed to by dest
 * @dest: the pointer to the buffer in which we copy the string
 * @src: the string to be copied

 * Return: pointer to dest
 */

char *_strcpy(char *dest, char *src)
	{
	int asb, a;

	asb = 0;

	while (src[asb] != '\0')
	{
	asb++;
	}

	for (a = 0; a < asb; a++)
	{
	dest[a] = src[a];
	}
	dest[a] = '\0';
	return (dest);
}

 /**
 * new_dog - this creates a new dog
 * @name: the name of the dog
 * @age: the age of the dog
 * @owner: the owner of the dog
 * Return: the pointer to the new dog when successful, NULL when it does not
 */

dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t *dog;
	int asb1, asb2;

	asb1 = _strlen(name);
	asb2 = _strlen(owner);

	dog = malloc(sizeof(dog_t));
	if (dog == NULL)
	return (NULL);

	dog->name = malloc(sizeof(char) * (asb1 + 1));
	if (dog->name == NULL)
	{
	free(dog);
	return (NULL);
	}
	dog->owner = malloc(sizeof(char) * (asb2 + 1));
	if (dog->owner == NULL)
	{
	free(dog);
	free(dog->name);
	return (NULL);
	}
	_strcpy(dog->name, name);
	_strcpy(dog->owner, owner);
	dog->age = age;
	return (dog);
}
