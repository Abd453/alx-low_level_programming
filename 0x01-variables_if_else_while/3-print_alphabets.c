#include <stdio.h>

/**
 * main - entry point
 *
 * Desciption: print  alphabet in lowercase then ini uppercase
 *
 * Return: ALways 0 (success)
 */

int main(void)
{
	char ch = 'a';
	char CH = 'A';

	/*prints a - z*/
	while (ch <= 'z')
	{
		putchar(ch);
		ch++;
	}

	/*prints A - Z*/
	while (CH <= 'Z')
	{
		putchar(CH);
		CH++;
	}
	putchar('\n');

	return (0);
}

