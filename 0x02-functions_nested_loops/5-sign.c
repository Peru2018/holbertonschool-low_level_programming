#include "holberton.h"

/**
 * print_sign - check the code for Holberton School students.
 * @n: numeric variable
 *
 * Return: int.
 */
int print_sign(int n)
{
	if (n > 0)
	{
		_putchar ('+');
		return (1);
	}
	else if (n < 0)
	{
		_putchar ('-');
		return (-1);
	}
	else
	{
		_putchar ('0');
		return (0);
	}
}
