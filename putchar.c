#include <unistd.h>

/**
 * _putchar - write the charactere c to stdout
 * @c: charatere to print
 * Return: 1 on success
 * on error, -1 is returned
 */

int _putchar(char c)
{
	return (write(1, &c, 1));
}
