#include "main.h"
#include <stdlib.h>

/**
 * read_textfile - Read a text file and print its content to STDOUT.
 * @filename: The name of the text file to read.
 * @letters: The number of letters to read and print.
 * Return: The actual number of bytes read and printed, or 0 on failure.
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
	char *buffer;
	int file_descriptor;
	ssize_t bytes_read, bytes_written, total_written = 0;

	if (filename == NULL)
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
	{
		close(file_descriptor);
		free(buffer);
		return (0);
	}

	while (bytes_read > 0)
	{
		bytes_written = write(STDOUT_FILENO, buffer + total_written, bytes_read);
		if (bytes_written == -1)
		{
			close(file_descriptor);
			free(buffer);
			return (0);
		}

		bytes_read -= bytes_written;
		total_written += bytes_written;
	}

	close(file_descriptor);
	free(buffer);

	return (total_written);
}
