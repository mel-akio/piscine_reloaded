#include <unistd.h>
#include <stdio.h>

void	ft_is_negative(int);
void	ft_ft(int *nbr);
void	fr_swap(int *a, int *b);
int		ft_recursive_factorial(int nb);
int		ft_sqrt(int nb);
void	ft_putstr(char *str);

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

int main(int argc, char **argv)
{
	ft_putstr(argv[1]);
	return (0);
}
