#include "main.h"

/**
 * _putstring - writes the char c to stdout
 * @c: char to print
 *
 * Return: On success 1.
 */

int _printf(char c)
{
	return (write(1, &c, 1));
}
