#include "holberton.h"

/**
 * puts_half - print half a string, followed by a new line.
 * @str: string.
 *
 * Return: Always 0.
 */
void puts_half(char *str)
{
	int  i;

	int count;

	count = 0;

	for (i = 0; str[i] != '\0'; i++)
	{
		count++;
	}
	for (i = 0; i <= count - 1; i++)
	{
		if (count % 2 == 0)
		{
			if (i >= count / 2)
			{
			_putchar(str[i]);
			}

		}

	}
	_putchar('\n');
}
