#include "main.h"


/**
 * print_error - a function that prints error messages
 * @file_from: original file
 * @file_to: the destination of the copy
 * @argv: vector of arguments
 *
 * Return: 0
 */
void print_error(int file_from, int file_to, char *argv[])
{
	if (file_from == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't read from %s\n", argv[1]);
		close(file_from);
		close(file_to);
		exit(98);
	}
	if (file_to == -1)
	{
		dprintf(STDERR_FILENO, "Error: can't write to %s\n", argv[2]);
		close(file_from);
		close(file_to);
		exit(99);
	}
	if (close(file_from) == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't close %d\n", file_from);
		exit(100);
	}
	if (close(file_to) == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't close %d\n", file_to);
		exit(100);
	}
}

/**
 * main - a function that copies one file to another
 * @argc: number of arguments
 * @argv: Vector of arguments
 *
 * Return: copy files
 */

int main(int argc, char *argv[])
{
	int file_to, file_from;
	ssize_t bytes_read, written_bytes;
	char buffer[1024];

	if (argc != 3)
	{
		dprintf(STDERR_FILENO, "%s\n", "Usage: cp file_from file_to");
		exit(97);
	}
	file_from = open(argv[1], O_RDONLY);
	if (file_from == -1)
		print_error(-1, 0, argv);
	file_to = open(argv[2], O_CREAT | O_WRONLY | O_TRUNC | O_APPEND, 0664);
	if (file_to == -1)
		print_error(0, -1, argv);
	while ((bytes_read = read(file_from, buffer, 1024)) > 0)
	{
		written_bytes = write(file_to, buffer, bytes_read);
		if (written_bytes == -1 || written_bytes != bytes_read)
		{
			dprintf(STDERR_FILENO, "Error: Can't write to %s\n", argv[2]);
			close(file_from);
			close(file_to);
			exit(99);
		}
	}
	if (close(file_from) == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't close %d\n", file_from);
		exit(100);
	}
	if (close(file_to) == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't close %d\n", file_to);
		exit(100);
	}
	return (0);
}
