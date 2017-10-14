#include <unistd.h>
#include <stdio.h>
#include "ex22/ft_abs.h"

void	ft_is_negative(int);
void	ft_ft(int *nbr);
void	fr_swap(int *a, int *b);
int		ft_recursive_factorial(int nb);
int		ft_sqrt(int nb);
void	ft_putstr(char *str);
int		ft_strlen(char *str);
int		ft_strcmp(char *s1, char *s2);
char	*ft_strdup(char *src);
int		*ft_range(int min, int max);

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

int main(int argc, char **argv)
{
	//printf("%d\n",strcmp(argv[1], argv[2]));
	//printf("%d",ft_strcmp(argv[1], argv[2]));
	int val;

	val = -10;

	ABS(val)
	printf("%d",val);
}
