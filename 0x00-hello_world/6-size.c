#include <stdio.h>
/**
 * main - A program that prints the size of various types on the computer
 * Return 0
 */

int main(void)
{
	char c1;
	int i1;
	long int li1;
	long long int lli1;
	float f1;

	printf("Size of a char: %lu byte(s)\n", (unsigned long)sizeof(c1));
	printf("Size of an int: %lu byte(s)\n", (unsigned long)sizeof(i1));
	printf("Size of a long int: %lu byte(s)\n", (unsigned long)sizeof(li1));
	printf("Size of a long long int: %lu byte(s)\n", (unsigned long)sizeof(lli1));
	printf("Size of a float: %lu byte(s)\n", (unsigned long)sizeof(f1));
	return (0);
}
