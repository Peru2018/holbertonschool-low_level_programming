#include "holberton.h"
#include <stdio.h>

/**
 * *_strcat - function that concatenates two strings.
 * @dest: string.
 * @src: string.
 * Return: Always 0.
 */
char *_strcat(char *dest, char *src)
{

	char *s1 = dest;

	while (*dest != '\0')
	{
		dest++;
	}
	while (*src != '\0')
	{
		*dest = *src;
		dest++;
		src++;
	}
	*dest = '\0';
	return (s1);
}


