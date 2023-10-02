#include "main.h"

/**
 *create_file - creates a file
 *@filename: name of the file to create
 *@text_content: NULL terminated string to write to the file
 *Returns: 1 on success, -1 on failure
 */

int create_file(const char *filename, char *text_content)
{
	int fileId, charWritten;

	if (filename == NULL)
		return (-1);
	if (text_content == NULL)
		fileId = open(filename, O_WRONLY | O_CREAT | O_EXCL, 0600);
	else
		fileId = open(filename, O_WRONLY | O_CREAT | O_EXCL | O_TRUNC, 0600);	
	if (fileId == -1)
	{
		if (errno == EEXIST)
			fileId = open(filename, O_WRONLY | O_TRUNC);

	}

	if (fileId == -1)
		return (-1);
	
	if (text_content != NULL)
		charWritten = write(fileId, text_content, strlen(text_content));
	if (charWritten == -1)
	{
		close(fileId);
		return (-1);
	}

close(fileId);
return (1);
}
