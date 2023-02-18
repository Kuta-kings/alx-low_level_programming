#include <stdio.h>
/**
 * main - printing lowercase lphabets without printf and puts functions
 * Return: 0 (Success)
 */
int main(void)
{
	char letter;

	for (letter = 'a'; letter <= 'z'; letter++)
		putchar(letter);

	putchar('\n');

	return (0);
}
