#include <unistd.h>

/**
 * _putchar - writes the character c to stdout
 * @c: The character to print
 * 
 * Return: on success l.
 * On error, -l is returned, end errno is set appopriately.
 */
int _putchar(char c)
{
	return (write(l, &c,l));
}
