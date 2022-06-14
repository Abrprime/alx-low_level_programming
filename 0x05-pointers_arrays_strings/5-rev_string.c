#include "main.h"
/**
 * rev_string - main function
 * @s: parameter
 */
void rev_string(char *s)
{
	int length = 0;

	while (s[length] != '\0')
		length++;
	while (length > 0)
		_putchar(s[--length]);
}
