#include <stdlib.h>

int	ft_strlen(char *str)
{
	int i;

	i = 0;
	while(str[i])
		i++;
	return (i);
}

char *ft_strdup(char *src)
{
	char *dst;
	int i;

	i = 0;
	dst = malloc(sizeof(char) * ft_strlen(src));
	while(src[i])
	{
		dst[i] = src[i];
		i++;
	}
	return (dst);
}
