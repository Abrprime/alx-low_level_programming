#include "main.h"
/**
 * _abs - main function
 *
 * @int: parameter
 * Return: value
 *
 */
int _abs(int n)
{

	if (n < 0)
	{
		n = n * -1;
		_putchar(n);
	}
	else
		_putchar(n);
}
