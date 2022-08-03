#include "function_pointers.h"
/**
 * print_name - function that prints a name.
 * @name: name
 * @f: pointer to a function
 * Description: function that prints a name.
 * Return: Reurn nothing
 */
void print_name(char *name, void (*f)(char *))
{
	if (name == NULL || F == NULL)
		return;
	f(name);
}
