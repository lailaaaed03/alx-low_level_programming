#include "stdio.h"
#include "stdlib.h"

/**
 * main - Entry point
 *
 * Description: A C program that prints the alphabets in lower case
 *
 * Return: Always 0 (Success)
 */

int main(void)
{

char c;

	for (c = 'a' ; c <= 'z' ; c++)
		putchar(c);
	putchar('\n');

	return (0);
}
