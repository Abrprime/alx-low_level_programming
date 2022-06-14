#include "main.h"
/**
 * puts_half - main function
 *
 * @str: parameter
 */
void puts_half(char *str)
{
	int n;
	int c;

	for (n = 0; str[n] != '\0'; n++)

	if (n % 2 == 0)
	{
		c = (n / 2);
		while (str[c] != '\0')
			_putchar(str[]);
	}
	else
	{
		c = (n + 1) / 2;
		while (str[c] != '\0')
			_putchar(str[c++]);
	}
	_putchar(10);
}
