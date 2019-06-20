#include <stdlib.h>
#include <time.h>
#include <stdio.h>

/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
int n;

srand(time(0));
n = rand() - RAND_MAX / 2;
if (n > 0)
{
	/* if the number is greater than 0; is positive */
printf("is positive");
}
else if (n == 0)
{
	/* if the number is 0: is zero */
printf("is zero");
}
else if (n < 0)
{
	/* if the number is less than 0: is negative */
printf("is negative");
}
return (0);
}
