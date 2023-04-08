#include "main.h"
/**
 * append_text_to_file - appends text at the end of a file.
 * @filename: file name
 * @text_content: NULL terminated string to write to the file
 * Return: 1 (success)
 *	if error -1
 */
int append_text_to_file(const char *filename, char *text_content)
{
	int file, len = 0, w;

	if (!filename)
		return (-1);
	if (text_content)
		while (text_content[len])
			++len;
	file = open(filename, O_WRONLY | O_APPEND);
	if (file == -1)
		return (-1);
	w = write(file, text_content, len);
	if (w == -1)
		return (-1);
	close(file);
	return (1);

}

