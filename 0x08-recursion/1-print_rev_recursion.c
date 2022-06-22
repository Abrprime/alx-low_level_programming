#include "main.h"
/**
 * _print_rev_recursion - main fuction
 * @s: parameter
 * Retrun: void
 */
void _print_rev_recursion(char *s)
{
	if (*s == '\0')
	{
		return;
	}
	else
	{
		_print_rev_recursion(++s);
        	_putchar(*s);
	}
	_putchar(10);
}
