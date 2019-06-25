#include "holberton.h"
/**
 * print_alphabet - check the code for Holberton School students.
 *
 * Return: void.
 */
void print_alphabet(void)
{
	char Alphabet;

	Alphabet = 'a';
	while (Alphabet <= 'z')
	{
	_putchar (Alphabet);


	Alphabet++;

	}
	_putchar ('\n');
}


