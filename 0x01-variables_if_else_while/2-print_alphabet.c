#include <stdio.h>

/**
 * main - entry point
 *
 * Desciption: print all alphabet letters
 *
 * Return: ALways 0 (success)
 */

int main(void)
{
	char ch = 'a';

	while (ch <= 'z')
	{
		putchar(ch);
		ch++;
	}
	putchar('\n');

	return (0);
}
