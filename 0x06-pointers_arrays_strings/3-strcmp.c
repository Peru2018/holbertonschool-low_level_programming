#include "holberton.h"
#include <stdio.h>

/**
 * _strcmp - write a function that compares two strings.
 * @s1: string 1
 * @s2: string 2
 * Return: Always 0.
 */
int _strcmp(char *s1, char *s2)
{
	int diff;
	int i;

	for (i = 0; *s1 != '\0' || *s2 != '\0'; i++)
	{
		if (*s1 < *s2)
		{
			return (-15);
		}
		else if (*s1 > *s2)
		{
			return (15);
		}
		else
		{
			return (i);
		}
		diff = (*s1 - *s2);
		if (diff != 0)
		{
			break;
		}

	}
	return (i);
}
