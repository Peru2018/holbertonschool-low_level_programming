#include <stdio.h>

/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	char Numbers;
	char Letters;

	Numbers = '0';

	while (Numbers <= '9')
	{
		putchar(Numbers);
		Numbers++;
	}

	Letters = 'a';

	while (Letters <= 'f')
	{
		putchar(Letters);
		Letters++;
	}
	putchar('\n');
return (0);
}
