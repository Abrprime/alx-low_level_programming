#include "main.h"
/**
 * jack_bauer - main function
 *
 */
void jack_bauer(void)
{
	char a;
	char b;
	char c;
	char d;

	for (a = 48; a < 51; a++)
	{
		if (a < 49)
		{
			for (b = 48;  b < 58; b++)
			{
				for (c = 48; c < 53; c++)
				{
					for (d = 48; d < 58; d++)
					{
						_putchar(a);
						_putchar(b);
						_putchar(':');
						_putchar(c);
						_putchar(d);
						_putchar(10);
					}
				i}
			}
		}
		else
		{
			for (b = 48;  b < 52; b++)
			{
				for (c = 48; c < 54; c++)
				{
					for (d = 48; d < 58; d++)
					{
						_putchar(a);
						_putchar(b);
						_putchar(':');
						_putchar(c);
						_putchar(d);
						_putchar(10);
					}
				}
			}
		}
	}
}
