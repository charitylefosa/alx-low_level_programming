#include<elf.h>
#include<stdio.h>
#include<stdlib.h>
#include<unistd.h>
#include<fcntl.h>
#include<sys/stat.h>
#include<sys/types.h>
/**
*
*
*
*
*/
int main (int argc, char *argv[])
{
	int fn, i;
	Elf64_Ehdr elf_header;

	if (argc != 2)
	{
		printf(STDERR_FILENO, "Usage: %s elf_filename\n", argv[0];
		exit(98);
	}
	fn = open(argv[1], O_RDONLY);
	if (fn == -1)
	{
		dprintf(STDERR_FILENO, "Error: cannot read file %s\n", argv[1]);
		exit(98);
	}
	if (read(fd, &elf_header, sizeof(elf_header)) != sizeof(elf_header))
	{
		dprintf(STDERR_FILENO, "Error: cannot read ELF header\n");
		exit(98);
	}
	for (i = 0; i < 4; i++)
	{
		if (elf_header.e.ident[i] != 127 &&
			elf_header.e.ident[i] != 'E' &&
			elf_header.e.ident[i] != 'L' &&
			elf_header.e.ident[i] != 'F')
		{
			dprintf(STDERR_FILENO, "Error: Not an ELF file\n");
			exit(98);
		}
	}
	printf("ELF Header:\n");
	printf(" Magic:  ");
	for (i = 0; i < EI_NODENT; i++)
	{
		printf("%02x ", elf_header.e_ident[i];
	}
	printf("\n");
	printf(" Class:                              ");
	switch (elf_header.e.ident[EI_CLASS])
	{
		case ELFCLASSNONE:
			printf("none\n");
			break;
                case ELFCLASS32:
                        printf("ELF32\n");
                        break;
                case ELFCLASS64:
                        printf("ELF64\n");
                        break;
                default:
                        printf("<unknown: %x>\n", elf_header.e.ident[EI_CLASS]);
	}
	printf("  Data:                            ");
	switch (elf_header.e_ident[EI_DATA])
	{
		case ELFDATANONE:
			printf("none\n");
			break;
		case ELFDATA2LSB:
			printf("2's complement, little endian\n");
			break;
		case ELFDATA2MSB:
			printf("2's complement, big endain\n");
			break;
		default:
			printf("<unknown: %x>\n", elf_header.e.ident[EI_CLASS]);
	}
	printf("  Version:                       %d", elf_header.e.ident[NT_VERSION]);
	switch (elf_header.e.ident[NT_VERSION])
	{
		case EV_CURRENT:
			printf("    (current)\n");
			break;
		default:
			printf("\n");
			break;
	}
	printf("      OS/ABI:                             ");
	switch (elf_header.e.ident[EI_OSANI])
	{
		case ELFOSABI_NONE:
			printf("UNIX - System V\n");
			break;
                case ELFOSABI_HPUX:
                        printf("UNIX - HP-UX\n");
                        break;
                case ELFOSABI_NETBSD:
                        printf("UNIX - NetBSD\n");
                        break;
                case ELFOSABI_LINUX:
                        printf("UNIX - Linux\n");
                        break;
                case ELFOSABI_SOLIRIS:
                        printf("UNIX - Solaris\n");
                        break;
                case ELFOSABI_IRIX:
                        printf("UNIX - IRIX\n");
                        break;
                case ELFOSABI_NETBSD:
                        printf("UNIX - NetBSD\n");
                        break;
                case ELFOSABI_NETBSD:
                        printf("UNIX - NetBSD\n");
                        break;
                case ELFOSABI_NETBSD:
                        printf("UNIX - NetBSD\n");
                        break;
	}
}
