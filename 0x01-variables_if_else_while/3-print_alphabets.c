#include <stdio.h>

/**
 * main - prints alphabets both lower and upper cases
 *
 *  Returns: Always 0 (Success)
 */
int main(void)
{
	char ch;

	for (ch = 'a'; ch <= 'z'; ch++)
		putchar(ch);

	for (ch = 'A'; ch <= 'Z'; ch++)

		putchar(ch);

	putchar('\n');

	return (0);
}
