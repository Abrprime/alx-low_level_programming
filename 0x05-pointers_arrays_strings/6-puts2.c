#include "main.h"
/**
 * puts2 - main function
 *
 * @str:parameter
 */
void puts2(char *str)
{
	int n;

	for (n = 0; str[n] != '\0'; n = n + 2)
		_putchar(str[n]);
}
