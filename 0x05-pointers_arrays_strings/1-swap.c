#include "holberton.h"
#include <stdio.h>

/**
 * swap_int - swap the value of two integers.
 * @a: integer
 * @b: integer
 *
 * Return: void
 */
void swap_int(int *a, int *b)
{
	int temp = *a;
	*a = *b;
	*b = temp;
}
