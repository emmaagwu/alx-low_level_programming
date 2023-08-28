/**
 **_memset - fills the first n bytes of the memory area
 *pointed to by s with the constant byte b
 *@s : the buffer(memory block)
 *@b: the byte size to filled
 *@n: the number of bytes to be filled
 *Return: the pointer to the buffer s
 */

char *_memset(char *s, char b, unsigned int n)
{
	unsigned int i;
	char *ptr = s;

	i = 0;

	while (i < n)
	{
		s[i] = b;
		i++;
	}
	return (ptr);
}
