#include "main.h"
#include <unistd.h>

/**
 * _putchar - writes the character to stdout
 * Successful run returns 1
 */

int _putchar(char c)
{
	return(write(1, &c, 1));
}
