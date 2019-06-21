#include <stdio.h>

/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	char Alphabet;

	Alphabet = 'z';

	while (Alphabet >= 'a')
{
	putchar(Alphabet);


	Alphabet--;
}

	putchar('\n');
return (0);
}
