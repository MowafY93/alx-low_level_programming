#include"main.h"
/**
 *  *int print_last_digit - check the code.
 *   *
 *    * Return: Always 0.
 *     */
int print_last_digit(int n)
{
	int lastdigit;

	if (n < 0)
		lastdigit = -1 * n % 10;
	else
		lastdigit = n % 10;
		_putchar(lastdigit + '0');
		return (lastdigit);
}
