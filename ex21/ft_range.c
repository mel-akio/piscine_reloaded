#include <stdlib.h>

int	*ft_range(int min, int max)
{
	int i;
	int val;
	int *tab;
	
	if(min > max)
		return (NULL);
	i = 0;
	val = min;
	tab = malloc(sizeof(int) * max - min);
	if(tab == NULL)
		return (NULL);
	while(i < max - 1)
	{
		tab[i] = val;
		val++;
		i++;
	}
	return (tab);
}
