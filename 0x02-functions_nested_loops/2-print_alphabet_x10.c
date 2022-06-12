#include "main.h"
/**
 * print_alphabet_x10 - main function
 *
 * Return: no return value
 */
void print_alphabet_x10(void)
{
	int j = 0;

	while (i < 10)
	{
		int i;

		for (i = 97; i <= 122; i++)
		{
			 _putchar(i);
		}
		j++;
	}
	_putchar(10);
}
