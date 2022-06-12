#include "main.h"
/**
 * main - print putchart
 *
 * Return: return 0
 */
int main(void)
{
	char a[8] = "_putchar";
	int i;

	for (i = 0; i <= 7; i++)
	{
		_putchar(a[i]);
	}
	_putchar(10);
	return (0);
}
