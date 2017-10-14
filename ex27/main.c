#include <sys/types.h>
#include <sys/stat.h>
#include <fcntl.h>
#include <stdio.h>
#include <unistd.h>
#include "includes/header.h"

int	transfert(char *src, char *dst)
{
	int i;
	int j;

	i = 2;
	j = 0;
	while(src[i] || dst[j])
	{
		if(src[i] != dst[j])
			return (1);
		i++;
		j++;
	}
	return (0);
}
int main(int argc, char **argv)
{
	int fd;
	char *filename = argv[1];
	char courant;

	if(argc == 1)
		ft_putstr("File name missing.\n");
	else
	{
		fd = open(filename, O_RDWR);
		if(transfert(argv[0], argv[1]) == 0)
			ft_putstr("Please enter a valid argument.\n");
		else if(argc > 2)
			ft_putstr("Too many arguments.\n");
		else if(fd == 3)
			while(read(fd,&courant,1))
				ft_putchar(courant);
		close(fd);
	}
	return (0);
}
