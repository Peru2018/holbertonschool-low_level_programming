#include "holberton.h"

/**
 * puts2 - print one char out of 2 of a string, followed by a new line.
 * @str: string.
 *
 * Return: void
 */
void puts2(char *str)
{
	int  i;

	int count;

	count = 0;

	for (i = 0; str[i] != '\0'; i++)
	{
		count++;
	}
	for (i = 0; i <= count; i = i + 2)
	{
		_putchar(str[i]);
	}
	_putchar('\n');
}


