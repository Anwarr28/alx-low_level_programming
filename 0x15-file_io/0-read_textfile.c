#include "main.h"

/**
  * read_textfile - reads a text file and prints it to the POSIX stdout.
  * @filename: a string holding the file name.
  * @letters: the number of letters to be read form the file given.
  *
  * Return: the actual number of letters it could read and print
  *		0 if the file can't be open , filename == NULL or write fall.
  */
ssize_t read_textfile(const char *filename, size_t letters)
{
	int fd;
	ssize_t bytRd, bytWr;
	char *buf;

	if (filename == NULL)
		return (0);

	buf = malloc(letters);
	if (buf == NULL)
		return (0);

	fd = open(filename, O_RDONLY);
	if (fd < 0)
		return (0);

	bytRd = read(fd, buf, letters);
	if (bytRd < 0)
	{
		free(buf);
		close(fd);
		return (0);
	}
	bytWr = write(STDOUT_FILENO, buf, bytRd);
	if (bytWr < 0 || bytWr != bytRd)
	{
		free(buf);
		close(fd);
		return (0);
	}

	free(buf);
	close(fd);
	return (bytWr);
}
