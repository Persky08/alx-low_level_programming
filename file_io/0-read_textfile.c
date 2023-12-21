#include "main.h"

/**
 * read_textfile - a function that reads a text file and prints the letters
 * @filename: filename.
 * @letters: numbers of letters printed.
 *
 * Return: numbers of letters printed.
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
	int file_descriptor;
	ssize_t read_file, written;
	char *buffer;

	if (filename == NULL)
		return (0);

	fd = open(filename, O_RDONLY);

	if (file_descriptor == -1)
		return (0);

	buf = malloc(sizeof(char) * (letters));
	if (!buffer)
		return (0);

	nrd = read(file_descriptor, buffer, letters);
	nwr = write(STDOUT_FILENO, buffer, read_file);

	close(file_descriptor);

	free(buffer);

	return (written);
}
