#include "holberton.h"

/**
 * _islower - check the code for Holberton School students.
 * @c: lowercase variable
 *
 * Return: 1 if the letter is lowercase. 0 otherwise
 */
int _islower(int c)
{

	if (c >= 'a' && c <= 'z')
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
