#include <stdio.h>

int	ft_strlen(char *str)
{
	int i;

	i = 0;
	while(str[++i]);
	return	 (i);
}


int	ft_count_if(char **tab, int(*f)(char*));

int main(int argc, char **argv)
{
	printf("%d",ft_count_if(argv, &ft_strlen));
	return 0;

}
