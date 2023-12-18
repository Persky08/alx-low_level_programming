#include "main.h"
/**
 * read_textfile - a function that reads text files and print to POIX
 * @filename: name of the file to be read
 * @letters: number of letters in the file
 * Return: number of letters
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
	ssize_t bytes_read, written_bytes;
	char *buffer;
	int file_descriptor;

	if (filename == NULL || strlen(filename) == 0)
		return (0);
	file_descriptor = open(filename, O_RDONLY);
	if (file_descriptor == -1)
		return (0);
	buffer = malloc(sizeof(char) * letters);
	if (buffer == NULL)
	{
		close(file_descriptor);
		return (0);
	}
	bytes_read = read(file_descriptor, buffer, letters);
	if (bytes_read == -1)
		free(buffer);
		close(file_descriptor);
		return (0);
	written_bytes = write(STDOUT_FILENO, buffer, bytes_read);
	if (written_bytes == -1 || written_bytes != bytes_read)
	{
		free(buffer);
		close(file_descriptor);
		return (0);
	}
	free(buffer);
	close(file_descriptor);
	return (written_bytes);
}
