#include <stdio.h>
/**
 * main - Entry Point
 * Return 0
 */

int main(void)
{
	char m;
	int n;

	m = 'a';
	n = 0;

	while (n < 10) {
		putchar(n + '0');
		n++;
	}

	while(m <= 'f'){
		putchar(m);
		m++;
	}

	putchar('\n');

        return (0);
}
