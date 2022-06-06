#include <stdio.h>
/**
 * main - main functin
 *
 * Return: end the program
 */

int main(void)
{
	char low = 97;
	char up = 65;

	while (low <= 122)
	{
		putchar(low);
		++low;
	}
	while (up <= 90)
	{
		putchar(up);
		++up;
	}

	putchar('\n');

	return (0);
}
