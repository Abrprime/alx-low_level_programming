#include "main.h"
/**
 *print_alphabet - main function
 *
 * Retrun: no value
 */
void print_alphabet(void)
{
	int i;

	for (i = 97; i <= 122; i++)
	{
		_putchar(i);
	}
	_putchar(10);
	return (0);
}
