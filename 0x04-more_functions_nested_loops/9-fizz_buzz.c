#include <stdio.h>

/**
 * main prints the numbers from one to one hundred. 
 * For multiples of three, Fizz is printed instead of the number.
 * For multiples of five, Buzz is printed instead of the number.
 * For multiples of both three and five, FIzzBuzz is printed instead of the number.
 * Return 0
 */

int main(void)
{
	int num;

	for (num = 1; num <= 100; num++)
	{
		if ((num % 3) == 0 && (num % 5) == 0)
			printf("FizzBuzz");

		else if ((num % 3) == 0)
			printf("Fizz");
		
		else if ((num % 5) == 0)
			printf("Buzz");

		else
			printf("%d", num);

		if (num == 100)
			continue;

		printf(" ");
	}

	printf("\n");

	return (0);
}
