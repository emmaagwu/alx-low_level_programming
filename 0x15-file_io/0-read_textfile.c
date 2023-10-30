#include "main.h"

/**
 *read_textfile -  reads a text file and prints it to the POSIX standard output
 *@filename: the name of file to be read and written
 *@letters: number of letters it should read and print
 *Return: 0 if unsuccessful or number of letters read and written
 */

ssize_t read_textfile(const char *filename, size_t letters)
{
	ssize_t charRead = 0, charWritten = 0;
	char *buff;
	int fileDesc;

	if (filename == NULL)
		return (0);
	buff = malloc(letters);
	if (buff == NULL)
		return (0);

	fileDesc = open(filename, O_RDONLY);
	if (fileDesc == -1)
	{
		free(buff);
		return (0);
	}

	charRead = read(fileDesc, buff, letters);
	if (charRead == -1)
	{
		close(fileDesc);
		free(buff);
		return (0);
	}

close(fileDesc);

		charWritten = write(STDOUT_FILENO, buff, charRead);
	if (charWritten == 0)
	{
		free(buff);
		return (0);
	}

		free(buff);

	return (charRead);
}
