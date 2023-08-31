#include"main.h"
#include<string.h>

/**
 * _check_palindrome - fucntion to check if a string is palindrome
 * @s: string to test
 * @start: index to start test
 * @end: index to also start test on the other end
 */

int _check_palindrome(char s[], int start, int end)
{
	int length =  strlen(s);

	start = 0;
	end = length - 1;

	if (s[start] == s[end] || s[length] == 0)
		return (1);
	if (s[start] != s[end])
		return (-1);
	return (_check_palindrome(s, start + 1, end - 1));
}

/**
 * is_palindrome - palindrome of a string
 * @s: string to check if its a palidrome
 * Return: -1 or 1
 */

int is_palindrome(char *s)
{
	int length = strlen(s);

	return (_check_palindrome(s, 0, length - 1));
}
