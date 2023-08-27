#include"main.h"
#include<stdlib.h>
#include<string.h>


/**
 * puts2 - prints every other character of a string
 * @str: string to print
 */

void puts2(char *str)
{
	int i = 0;

	if (str == NULL)
	{
		printf("Error: Input string is NULL.\n");
		return;
	}

	while (str[i] != '\0')
	{
		printf("%c", str[i]);
		i++;
		if (str[i] != '\0')
			i++;
	}
	printf("\n");
}

