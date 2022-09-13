#include "main.h"
/**
 *jack_bauer - this will print the time
 */
void jack_bauer(void){
	int y, i;
	for (y = 0; y < 24; i++)

{
		for (i = 0; i < 60; i++)

		{
			if (y < 10)
			{
				_putchar('0');
				_putchar(y + '0');
			}
			else if (y >= 10)
			{
				_putchar ((y / 10) + '0');
				_putchar((y % 10) + '0');

			}
			if (i < 10)
			{
				_putchar(':');
				_putchar('0');
				_putchar(i + '0');
			}
			else if (i > 10)
			{
				_putchar(':');
				_putchar((i / 10) + '0');
				_putchar((i % 10) + '0');


		}
		}
		_putchar('\n');
	}

}
