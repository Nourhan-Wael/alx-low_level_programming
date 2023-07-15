#include <stdio.h>

/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */

int main(void)
{
	int i = 0;
	char s[] = "0123456789";

	while (i < sizeof(s))
	{
		putchar(s[i]);
		i++;
	}
	putchar('\n');

	return (0);
}

