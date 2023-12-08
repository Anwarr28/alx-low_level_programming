#include "main.h"

/**
  * create_file - function creates a file.
  * @filename: the name of the file to be created.
  * @text_content: a NULL terminated string to write to the file.
  *
  * Return: 1 on success. -1 on failure or filename is NULL.
  */
int create_file(const char *filename, char *text_content)
{
	int fd, bytWr, cnt = 0;

	if (filename == NULL)
		return (-1);

	fd = open(filename, O_WRONLY | O_CREAT | O_TRUNC, S_IRUSR | S_IWUSR);
	if (fd < 0)
		return (-1);

	if (text_content == NULL)
	{
		close(fd);
		return (1);
	}
	cnt = strlen(text_content);
	bytWr = write(fd, text_content, cnt);
	if (bytWr < 0)
	{
		close(fd);
		return (-1);
	}
	close(fd);
	return (1);
}
