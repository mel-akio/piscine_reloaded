#include <unistd.h>

void	ft_foreach(int *tab, int length, void(*f)(int));

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	ft_putnbr(int nb)
{
	int decal;
	long unit;
	int neg;
	long nbr;

	nbr = nb;
	neg = 0;
	decal = 1;
	if(nbr < 0)
	{
		neg = 1;
		nbr = nbr * -1;
		ft_putchar('-');
	}
	unit = nbr;
	while(unit > 9)
	{
		unit = unit / 10;
		decal*=10;
	}
	while(decal > 0)
	{
		unit = nbr;
		while(unit > 9)
		{
			unit = unit / 10;
		}
		ft_putchar(unit + '0');
		nbr -= unit * decal;
		decal = decal / 10;
	}
}

int main()
{
	int tab[10];
	int i;

	i = 0;
	while(i != 10)
	{
		tab[i] = i;
		i++;
	}
	ft_foreach(tab, 10, &ft_putnbr);
}
