#include <stdio.h>
/**
 * main - Entry Point
 * Return 0
 */

int main(void)
{
	char m;
	char n;

	m = 'a';
	n = 'A';

	while (m <= 'z'){
		putchar(m);
		m++;
	}

	while (n <= 'Z'){
		putchar(n);
		n++;
	}

	putchar('\n');
	return (0);
}
