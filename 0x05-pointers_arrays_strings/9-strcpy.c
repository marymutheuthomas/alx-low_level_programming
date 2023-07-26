/**
 * _strcpy - Copy a string from src to dest
 * @dest: Pointer to the destination buffer
 * @src: Pointer to the source string
 * Return: Pointer to dest
 */
char *_strcpy(char *dest, char *src)
{
	char *start = dest;

	while (*src)
	{
		*dest = *src;
		dest++;
		src++;
	}
	*dest = '\0';
	return (start);
}
