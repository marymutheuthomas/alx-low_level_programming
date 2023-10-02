#include"main.h"

/**
 * create_file - function to create file
 * @filename: pointer to file
 * @text_content: text data
 * Return: -1 or 0
 */

int create_file(const char *filename, char *text_content)
{
	int file_des;
	ssize_t bytes_written;

	if (filename == NULL)
	{
		return (-1);
	}
	file_des = open(filename, O_WRONLY | O_CREAT | O_TRUNC, S_IRUSR | S_IWUSR);
	if (file_des == -1)
	{
		return (-1);
	}
	if (text_content != NULL)
	{
		bytes_written = write(file_des, text_content, strlen(text_content));
		if (bytes_written == -1)
		{
			close(file_des);
			return (-1);
		}
	}
	close(file_des);
	return (1);
}

