#include"main.h"
#include<stdio.h>


/**
 * _puts - function to print 
 * @s: char to print
 * Return: charcter
 */

void _puts(char *s)
{
	while(*s !='\0')
	{
		putchar(*s);
		s++;
	}
}
