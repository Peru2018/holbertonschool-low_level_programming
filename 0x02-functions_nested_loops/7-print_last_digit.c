#include "holberton.h"

/**
 * print_last_digit - check the code for Holberton School students.
 * @c: last digit of a number
 *
 * Return: int
 */
int print_last_digit(int c)
{
	if (c >= 0)
	{
	_putchar(c % 10 + '0');
	return (c % 10);
	}
	else
	{
	c = c * -1;
	_putchar(c % 10 + '0');

	return (c % 10);
	}
}

