/**
 *_isalpha - check if a letter is alphabet
 *Return: (1) (0)
 *@c: charcter to check
 */

int _isalpha(int c)
{
	if ((c >= 97 && c <= 122) || (c >= 65 && c <= 90))
	{
		return (1);
	}
	return (0);
}

