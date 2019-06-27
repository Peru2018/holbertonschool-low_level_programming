#include "holberton.h"
#include <stdio.h>

/**
 * _abs - check the code for Holberton School students.
 * @c: integer
 *
 * Return: int
 */
int _abs(int c)
{

	if (c < 0)
	return (-c);
	else
	return (c);
	_putchar(c + '0');
}
