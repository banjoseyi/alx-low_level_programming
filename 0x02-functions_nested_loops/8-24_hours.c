#include "main.h"
/**
 * jack_bauer - function that prints every minute of the day of jack bauer, starti
 * n from 00:00 to 23:59, min loop count mins, while hour loop hour loop counts hours
 * and resets mins
 * Return:0
 */
void jack_bauer*(void)
{
	int hours = 0;
	int mintes = 0;
	int hours_remainder;
	int mins_remainder;

	while (hours <= 23)
	{
	while (minutes <= 59)
	{
	mins_remainder = minutes % 10;
	hours_remainder = hours % 10;
	_putchar(hours / 10 + '0');
	_putchar(hours_remainder + '0');
	_putchar(':');
	_putchar(mintues / 10 + '0');
	_putchar(mins_remainder + '0');
	minutes++;
	_putcher('\n');
	}
	hours++;
	minutes = 0;
	}
}
