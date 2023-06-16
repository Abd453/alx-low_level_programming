#include <stdio.h>

/**
 * main - entry point
 *
 * Desciption: print all alphabet letters except q and e
 *
 * Return: ALways 0 (success)
 */

int main(void)
{
	char ch = 'a';

	while (ch <= 'z')
	{
		if (ch == 'q' || ch == 'e')
			ch++;
		putchar(ch);
		ch++;
	}
	putchar('\n');

	return (0);
}
