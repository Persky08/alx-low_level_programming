#include "main.h"

/**
 * create_file - a function that creates a file
 * @filename: filename.
 * @text_content: content written in the file.
 *
 * Return: 1 if it success. -1 if it fails.
 */
int create_file(const char *filename, char *text_content)
{
	int file_descriptor;
	int nletters;
	int written_bytes;

	if (!filename)
		return (-1);

	file_descriptor = open(filename, O_CREAT | O_WRONLY | O_TRUNC, 0600);

	if (file_descriptor == -1)
		return (-1);

	if (!text_content)
		text_content = "";

	for (nletters = 0; text_content[nletters]; nletters++)
		;

	written_bytes = write(file_descriptor, text_content, nletters);

	if (written_bytes == -1)
		return (-1);

	close(file_descriptor);

	return (1);
}
