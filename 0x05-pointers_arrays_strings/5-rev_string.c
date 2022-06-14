#include "main.h"
/**
 * rev_string - function
 *
 * @s: pointer of parameter
 */
void rev_string(char *s)
{
	char c;
	int n = 0;
	int b = 0;
	int e;

	while (s[n] != '\0')
		n++;
	e = n - 1;
	n /= 2;
	while (n--)
	{
		c = s[b];
		s[b] = s[e];
		s[e] = c;
		b++;
		e--;
	}
}
