#include "main.h"

/**
 *display_error - displays error
 *@message: the error message
 *@filename: the filename
 *Return: void
 */

void display_error(const char* message, const char* filename)
{
fprintf(stderr, "Error: %s %s\n", message, filename);
exit(98);
return;
}

/**
 *read_and_display_header - displays header
 *@fd: file descriptor
 *filename: filename
 *Return: void
 */

void read_and_display_header(int fd, const char* filename)
{
int i;
Elf64_Ehdr header;
if (read(fd, &header, sizeof(Elf64_Ehdr)) != sizeof(Elf64_Ehdr))
display_error("reading ELF header from file:", filename);

printf("ELF Header:\n");
printf("  Magic:   ");
for (i = 0; i < EI_NIDENT; i++)
{
printf("%02x ", header.e_ident[i]);
}
printf("\n");
printf("  Class:                             %s\n", (header.e_ident[EI_CLASS] == ELFCLASS64) ? "ELF64" : "ELF32");
printf("  Data:                              %s\n", (header.e_ident[EI_DATA] == ELFDATA2LSB) ? "2's complement, little endian" : "2's complement, big endian");
printf("  Version:                           %d (current)\n", header.e_ident[EI_VERSION]);
printf("  OS/ABI:                            %d\n", header.e_ident[EI_OSABI]);
printf("  ABI Version:                       %d\n", header.e_ident[EI_ABIVERSION]);
printf("  Type:                              %hx\n", header.e_type);
printf("  Entry point address:               0x%lx\n", (unsigned long)header.e_entry);
}

/**
 *display_elf_header_info- displays header info
 *@filename: the name of the file
 *Return: void
 */

void display_elf_header_info(const char* filename)
{
char magic[4];

int fd = open(filename, O_RDONLY);
if (fd < 0)
{
perror("Error opening file");
exit(98);
}

if (read(fd, magic, 4) != 4 || magic[0] != ELFMAG0 || magic[1] != ELFMAG1 || magic[2] != ELFMAG2 || magic[3] != ELFMAG3)
{
display_error("is not a valid ELF file:", filename);
}

/* Reset file pointer to beginning and read and display header */
lseek(fd, 0, SEEK_SET);
read_and_display_header(fd, filename);

close(fd);
}

/**
 *main - the entry point
 *@argc: the argument count
 *@argv: the argument vector
 *Return: 0
 */

int main(int argc, char* argv[])
{
const char* filename = argv[1];

if (argc != 2)
{
fprintf(stderr, "Usage: %s elf_filename\n", argv[0]);
return 98;
}


display_elf_header_info(filename);
return EXIT_SUCCESS;
}
