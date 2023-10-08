#include<stdio.h>
/**
 *  * main - Entry point
 *   *
 *    * Return: Always 0 (Success)
 *     **/
int main(void)
{
	char ch = 'a';

	while (ch <= 'z')
		putchr(ch);
	ch++;
	return (0);
}
