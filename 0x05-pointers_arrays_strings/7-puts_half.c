#include "main.h"
/**
 * puts_half - main function
 *
 * @str: parameter
 */
void puts_half(char *str)
{
	int n;

	for (n = 0; str[n] != '\0'; n++)

	if (n % 2 == 0)
	{
		n = (n / 2);
		while (n > 0)
			_putchar(str[n++]);
	}
	else
	{
		n = (n - 1) / 2;
		while (n > 0)
			_putchar(str[n++]);
	}
	_putchar(10);
}