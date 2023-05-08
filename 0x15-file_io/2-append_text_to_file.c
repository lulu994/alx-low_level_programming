#include "main.h"

/**
 * append_text_to_file - That appends text at the end of a file.
 * @filename: THis is the name of the file
 * @text_content: This the string to append to text
 *
 * Return: 1 if is success and if not is -1
 */
int append_text_to_file(const char *filename, char *text_content)
{
	int fd, rw, len = 0;

	if (filename == NULL)
		return (-1);

	fd = open(filename, O_WRONLY | O_APPEND);
	if (fd < 0)
		return (-1);

	if (text_content != NULL)
	{
		while (text_content[len])
			len++;

		rw = write(fd, text_content, len);

		if (rw < 0)
			return (-1);
	}

	close(fd);
	return (1);
}
