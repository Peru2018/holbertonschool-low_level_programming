#include "holberton.h"

/**
 * print_alphabet_x10 - check the code for Holberton School students.
 *
 * Return: void.
 */
void print_alphabet_x10(void)
{
	char Alphabet;
	int counter;

	counter = 1;
	while (counter <= 10)
	{
		Alphabet = 'a';
		while (Alphabet <= 'z')
		{
			_putchar (Alphabet);
			Alphabet++;
		}
	_putchar ('\n');
	counter++;
	}
}
