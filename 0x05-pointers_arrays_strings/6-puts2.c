#include"main.h"
#include<string.h>


/**
 * puts2 - prints every other character of a string
 * @str: string to print
 */

void puts2(char *str)
{
	int i = 0, length;

	length = strlen(*str);
	if (str == NULL)
	{
		printf("Error: Input string is NULL.\n");
		return;
	}

	while (str[i] != '\0')
	{
		printf("%c", str[i]);
		i++;
	}
	printf("\n");
}
