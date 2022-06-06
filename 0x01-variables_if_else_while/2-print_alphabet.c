#include <stdio.h>
/**
 * main - print alphabet
 *
 * Return: end the program
 */

int main(void)
{
	char l = 97;

	while (l <= 122)
	{
		putchar(l);
		++l;
	}
	putchar('\n');

	return (0);
}
