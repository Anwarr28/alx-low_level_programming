#include "main.h"

#define PERMISSION (S_IRUSR | S_IWUSR | S_IRGRP | S_IWGRP | S_IROTH)

/**
  * main - program that copies the content of a file to another file.
  * @argc: the number of argument passed to the program.
  * @argv: an array of strings holding the arguments passed.
  *
  * Return: 0 if prog successeded,
  *		otherwise the prog will exit with an error message.
  */
int main(int argc, char *argv[])
{
	int fd1, fd2;
	ssize_t bytRd = 1, bytWr;
	char buf[BUFFER_SIZE];

	if (argc != 3)
	{
		dprintf(STDERR_FILENO, "Usage: cp file_from file_to\n");
		exit(97);
	}
	fd1 = open(argv[1], O_RDONLY);
	if (fd1 < 0)
	{
		dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", argv[1]);
		exit(98);
	}
	fd2 = open(argv[2], O_WRONLY | O_TRUNC | O_CREAT, PERMISSION);
	if (fd2 < 0)
	{
		close(fd1);
		dprintf(STDERR_FILENO, "Error: Can't write to %s\n", argv[2]);
		exit(99);
	}
	while (bytRd > 0)
	{
		bytRd = read(fd1, buf, BUFFER_SIZE);
		if (bytRd < 0)
		{
			close(fd1);
			close(fd2);
			dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", argv[1]);
			exit(98);
		}
		bytWr = write(fd2, buf, bytRd);
		if (bytWr < 0)
		{
			close(fd1);
			close(fd2);
			dprintf(STDERR_FILENO, "Error: Can't write to file %s\n", argv[2]);
			exit(99);
		}

	}
	if (close(fd1) < 0)
	{
		dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", fd1);
		exit(100);
	}
	if (close(fd2) < 0)
	{
		dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", fd2);
		exit(100);
	}
	return (0);
}
