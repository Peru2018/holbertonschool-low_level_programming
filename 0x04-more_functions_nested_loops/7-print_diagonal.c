#include "holberton.h"

/**
 * print_diagonal - draw a diagonal line on the terminal.
 * @n: number of times character \ should be printed.
 *
 * Return: void
 */
void print_diagonal(int n)
{
	int i;
	int j;

	if (n <= 0)

		_putchar('\n');
		else
		{

			for (i = 0; i < n; i++)
			{
				for (j = 0; j < i; j++)
				{
					_putchar(' ');

				}
				_putchar('\\');
				_putchar('\n');
			}

		}

}

