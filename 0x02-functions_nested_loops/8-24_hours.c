#include "main.h"
/**
*
*
*
*
*
*/
void jack_bauer(void)
{
	int min;
	int hr;

	for (hr = 0; hr < 23; hr++)
	{
		for (min = 0; min < 59; min++)
		{
			_putchar(min + '0');
		}
		_putchar(hr + '0');
		_putchar(':');
		_putchar('\n');
	}
}
