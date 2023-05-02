#include "dog.h"
#include <stdlib.h>
#include <stdio.h>
int _strlen(char *str);
char *_strcpy(char *dest, const char *src);
/**
 * new_dog -creates a new dogand initialize it.
 * @name: name of the dog
 * @age: age of the dog
 * @owner:owner name of the dog.
 *
 * Return: return pointer to the new created dog.
 */
dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t *ptr = malloc(sizeof(dog_t));

	if (ptr == NULL)
		return (NULL);
	if (name != NULL)
	{
		ptr->name = malloc((_strlen(name) + 1));
		if (ptr->name != NULL)
			_strcpy(ptr->name, name);
	}
	if (owner != NULL)
	{
		ptr->owner = malloc((_strlen(owner) + 1));
		if (ptr->owner != NULL)
			_strcpy(ptr->owner, owner);
	}
	ptr->age = age;

	return (ptr);
}
/**
 * _strlen - evaluates the length of string without the null char
 * @str: pointer to string to be evaluated its length
 *
 * Return: length of the string(int)
 */
int _strlen(char *str)
{
	int i, cnt;

	cnt = 0;
	for (i = 0; str[i] != '\0'; i++)
		cnt++;
	return (cnt);
}
/**
 * _strcpy - copy string in src to dest
 * @dest: destination for src string to be copied
 * @src: the source string to be copied
 *
 * Return: the address of the dest.
 */
char *_strcpy(char *dest, const char *src)
{
	int i;

	if (dest != NULL && src != NULL)
	{
		for (i = 0; src[i] != '\0'; i++)
			dest[i] = src[i];
		dest[i] = '\0';
	}
	else
		return (NULL);
	return (dest);
}
