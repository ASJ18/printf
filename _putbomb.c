#include "main.h"

/**
 * _putbomb - writes the char c to stdout
 * @c: char to print
 *
 * Return: On success 1.
 */

int _putstring(char c)
{
	return (write(1, &c, 1));
}
