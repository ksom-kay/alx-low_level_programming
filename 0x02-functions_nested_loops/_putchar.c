#include <unistd.h>
/**
 * __putchar.c - wrute the character c to stdout
 * @c: the character to print
 * Return: On success 1
 * On error, -1 is returned, and error set appropriately
 */

int _putchar(char c)
{
	return (write(1,&c,1));
}
