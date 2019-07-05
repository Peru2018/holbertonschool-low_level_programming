#include "holberton.h"
#include <stdio.h>

/**
 * *_strncat - write a function that concatenates two strings.
 * @dest: destination
 * @src: source
 * @n: bytes
 * Return: Always 0.
 */
char *_strncat(char *dest, char *src, int n)
{


	char *s1 = dest;
	int i;

	while (*dest != '\0')
	{
		dest++;
	}
	for (i = 0 ; i < n && src[i] != '\0' ; i++)
	{
		*dest = *src;
		dest++;
		src++;
	}
	*dest = '\0';
	return (s1);

}
