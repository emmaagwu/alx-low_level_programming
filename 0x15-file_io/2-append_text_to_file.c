#include "main.h"

/**
 *append_text_to_file - appends text at the end of a file
 *@filename:name of the file
 *@text_content: the NULL terminated string to add at the end of the file
 *Return: 1 on success and -1 on failure
 */

int append_text_to_file(const char *filename, char *text_content)
{
	int fileId;
	ssize_t charWritten;

	if (filename == NULL)
		return (-1);
	if (text_content == NULL)
		return (1);

	fileId = open(filename, O_WRONLY | O_APPEND);

	if (fileId < 0)
		return (-1);
	charWritten = write(fileId, text_content, strlen(text_content));
	close(fileId);

	if (charWritten < 0)
		return (-1);
return (1);
}
