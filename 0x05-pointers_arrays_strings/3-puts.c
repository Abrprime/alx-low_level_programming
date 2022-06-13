#include "main.h"
/**
 * _puts - main function
 *
 * @str: parameter
 *
 * Return: string
 */
void _puts(char *str)
{
	int i;

	for (i = 0; i != '\0'; i++)
	{
		_putchar(str[i]);
	}
	_putchar(10);
}
