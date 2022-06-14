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
		_putchar(str[(n / 2)++]);
	else
		_putchar(str[((n - 1) / 2)++]);
	_putchar(10);
}
