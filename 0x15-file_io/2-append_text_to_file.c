#include "main.h"

/**
 * append_text_to_file - Appends text to the end of a file.
 * @filename: A pointer to the name of the target file.
 * @text_content: The string to be added to the end of the file.
 *
 * Return: If the function encounters an error or if `filename` is NULL - -1.
 *         If the file specified by `filename` does not exist or write permissions are denied - -1.
 *         Otherwise - 1 indicating success.
 */
int append_text_to_file(const char *filename, char *text_content)
{
	int fd, w, len = 0;

	if (!filename)
		return (-1);

	if (text_content != NULL)
	{
		for (len = 0; text_content[len];)
			len++;
	}

	fd = open(filename, O_WRONLY | O_APPEND);
	if (fd == -1)
		return (-1);

	w = write(fd, text_content, len);
	close(fd);

	if (w == -1)
		return (-1);

	return (1);
}
