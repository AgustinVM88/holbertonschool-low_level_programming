#include "main.h"

/**
 * jack_bauer - function that prints every minute of the day of Jack Bauer,
 * starting from 00:00 to 23:59 .
 */
void jack_bauer(void)
{
	int hora, minuto;

	for (hora = 0; hora < 24; hora++)
	{
		for (minuto = 0; minuto < 60; minuto++)
		{
			_putchar((hora / 10) + '0');
			_putchar((hora % 10) + '0');
			_putchar(':');
			_putchar((minuto / 10) + '0');
			_putchar((minuto % 10) + '0');
			_putchar('\n');
		}
	}
}
