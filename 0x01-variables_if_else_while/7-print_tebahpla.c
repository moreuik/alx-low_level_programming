#include <stdio.h>
/**
 * main - Entry Point
 * Return 0
 */

int main(void)
{
	char m;

	m = 'z';

	while (m >= 'a'){
		putchar(m);
		m--;
	}

	putchar('\n');

        return (0);
}
