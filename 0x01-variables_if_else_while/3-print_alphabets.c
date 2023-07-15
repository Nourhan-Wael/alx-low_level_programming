#include <stdio.h>

/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */

int main(void)
{
	char i = 'a';

	while (i <= 'z')
	{
		putchar(i);
		i++;
	}

	char j = 'A';

	while (j <= 'Z')
	{
		putchar(j);
		j++;
	}
	putchar('\n');

	return (0);
}


