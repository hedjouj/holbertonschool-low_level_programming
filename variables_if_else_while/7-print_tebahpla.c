#include <stdio.h>
/**
 * main - Entry point
 * Return: Always 0 (Success)
 */

int main(void)
{
	char ch;

	for (ch = 'a'; (ch <= 'z'); ch++)
{
	if (ch <= 'z') ch = 'z' - (ch - 'a');
	else if ((ch = 'z' - (ch - 'a')))
	putchar(ch);
	putchar('\n');
}
	return (0);
}
