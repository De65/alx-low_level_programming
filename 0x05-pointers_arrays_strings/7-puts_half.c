#include "main.h"
/**
 * puts_half - function
 *
 * @str: pointer of parameter
 */
void puts_half(char *str)
{
	int length = 0;
	int ssublength;

	while (str[length] != '\0 ')
		length++;
	sublenght = (length % 2 == 0) ? length / 2 : (length + 1) / 2;
	while (str[sublenght] != '\0 ')
		_putchar(str[sublenght++]);
	_putchar(10);
}
