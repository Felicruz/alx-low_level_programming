#include "main.h"

/**
 * print_alphabet_x10- prints alphabet ten times.
 */
void print_alphabet_x10(void)
{
	int i;
	int y;

	for (y = 0; y < 10; y++)
	{
		for (i = 'a'; i <= 'z'; i++)
		{
		_putchar(i);
		}
	_putchar('\n');
	}
}
