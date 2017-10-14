#include <stdio.h>

int	ft_count_if(char **tab, int(*f)(char*))
{
	int i;
	int compt;

	i = 0;
	compt = 0;
	while(tab[i])
	{
		if (f(tab[i]) == 1)
			compt++;
		i++;
	}	
	return(compt);
}
