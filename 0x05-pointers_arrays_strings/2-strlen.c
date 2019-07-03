#include "holberton.h"
#include <stdio.h>

/**
 * _strlen - return the lenght of a string.
 * @s: string.
 *
 * Return: int
 */
int _strlen(char *s)
{

	int  i;

	int count;

	count = 0;

	for (i = 0; s[i] != '\0'; i++)
	{
		count++;
	}
	return (count);
}
