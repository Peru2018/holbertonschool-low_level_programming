#include "holberton.h"

/**
 * print_numbers - function that prints the numbers, from 0 to 9.
 *
 * Return: void
 */
void print_numbers(void)
{

	int a = 0;

	while (a < 10)
	{
		_putchar('0' + a);
	a++;
	}

	_putchar('\n');

}
