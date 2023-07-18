#include<string.h>
#include"main.h"

/**
 * main - prints _putchar
 * Return: return (0)
 * @c: The character to print
 */

int _putchar(char c);

int main(void)
{
	char mychars[] = "_putchar";
	int length = strlen(mychars);
	int i = 0;

	while (i < length)
	{
		_putchar(mychars[i]);
		i++;
	}
	_putchar('\n');
	return (0);
}
