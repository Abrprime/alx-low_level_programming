#include "main.h"
/**
 * print_sign - main function
 *
 * @n: parameter
 *
 * Return: return value
 */
int print_sign(int n)
{
	signed int n;

	if (n > 0)
	{
		_putchart('+');
		return (1);
	}
	else if (n < 0)
	{
		_putchart('-');
		return (-1);
	}
	else if (n == 0)
	{
		_putchart('0');
		return (0);

}
