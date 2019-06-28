#include "holberton.h"

/**
 * print_triangle - print a triangle, followed by a new line..
 * @size: size of triangle
 * Return: void.
 */
void print_triangle(int size)
{
	int row;
	int column;
	int z;


	for (row = 0; row < size; row++)
	{

		for (column = 0; column < size; column++)
		{

			z = row + 1;
			if (column < size - z)
			{
				_putchar(' ');
			}
			else
			{
				_putchar('#');
			}

		}
	_putchar('\n');
	}
	if (size <= 0)
		_putchar('\n');

}

