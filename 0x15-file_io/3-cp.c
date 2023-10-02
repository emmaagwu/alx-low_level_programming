#include "main.h"

/**
 * build_buffer - reserves 1024 bytes for a buffer.
 * @file: Thefile buffer is storing chars for.
 *
 * Return: A pointer to the newly-allocated buffer.
 */
char *build_buffer(char *file)
{
	char *buff;

	buff = malloc(sizeof(char) * 1024);

	if (buff == NULL)
	{
		dprintf(STDERR_FILENO,
			"Error: Can't write to %s\n", file);
		exit(99);
	}

	return (buff);
}

/**
 * close_file - closes file descriptors.
 * @fileId: The file descriptor to be closed.
 */
void close_file(int fileId)
{
	int c;

	c = close(fileId);

	if (c == -1)
	{
		dprintf(STDERR_FILENO, "Error: Unable to close fd %d\n", fileId);
		exit(100);
	}
}

/**
 * main - Copies one file to another file.
 * @argc: The argument count.
 * @argv: The argument vector.
 *
 * Return: 0 on success.
 */
int main(int argc, char *argv[])
{
	int from, to, charRead, charwrite;
	char *buffer;

	if (argc != 3)
	{
		dprintf(STDERR_FILENO, "Usage: cp file_from file_to\n");
		exit(97);
	}

	buffer = build_buffer(argv[2]);
	from = open(argv[1], O_RDONLY);
	charRead = read(from, buffer, 1024);
	to = open(argv[2], O_CREAT | O_WRONLY | O_TRUNC, 0664);

	do {
		if (from == -1 || charRead == -1)
		{
			dprintf(STDERR_FILENO,
				"Error: Can't read from file %s\n", argv[1]);
			free(buffer);
			exit(98);
		}

		charwrite = write(to, buffer, charRead);
		if (to == -1 ||charwrite == -1)
		{
			dprintf(STDERR_FILENO,
				"Error: Can't write to %s\n", argv[2]);
			free(buffer);
			exit(99);
		}

		charRead = read(from, buffer, 1024);
		to = open(argv[2], O_WRONLY | O_APPEND);

	} while (charRead > 0);
	free(buffer);
	close_file(from);
	close_file(to);
	return (0);
}


