/**
 *_memcpy - copies memory area
 *@dest: destination memory
 *@src:  source memory
 *@n: number of bytes to copy
 *Return: the pointer to dest
 */

char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int i;
	char *ptr = dest;

	i = 0;
	while (i < n)
	{
		dest[i] = src[i];
		i++;
	}
	return (ptr);

}
