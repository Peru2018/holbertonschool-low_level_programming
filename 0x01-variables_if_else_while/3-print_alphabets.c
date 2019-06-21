#include <stdio.h>

/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	char Alphabet;
	char UAlpha;

	Alphabet = 'a';

	while (Alphabet <= 'z')
	{
		putchar(Alphabet);
		Alphabet++;
	}

	UAlpha = 'A';

	while (UAlpha <= 'Z')
	{
		putchar(UAlpha);
		UAlpha++;
	}
	putchar('\n');
return (0);
}
