#include "holberton.h"

/**
 * puts2 - print one char out of 2 of a string, followed by a new line.
 * @str: string.
 *
 * Return: Always 0.
 */
void puts2(char *str)
{
	int  i;

	for (i = 0; str[i] != '\0'; i = i + 2)
	{
		_putchar(str[i]);
	}
	_putchar('\n');
}


