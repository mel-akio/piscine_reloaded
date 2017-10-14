#include <unistd.h>

void	ft_putchar(char c);

void	ft_putstr(char *str)
{
	int i;

	i = 0;
	while (str[i])
		ft_putchar(str[i++]);
}

int	ft_strcmp(char *s1, char *s2)
{
	int i;

	i = 0;
	while(s1[i] || s2[i])
	{
		if(s1[i] != s2[i])
			return (s1[i] - s2[i]);
		i++;
	}
	return (0);
}

int	ft_sort_params(int len, char **argv)
{
	int i;

	i = 1;
	while (i != len - 1)
	{
		if(ft_strcmp(argv[i], argv[i + 1]) > 0)
		{
			argv[0] = argv[i];
			argv[i] = argv[i + 1];
			argv[i + 1] = argv[0];
			i = 1;
		}
		else
			i++;
	}
	return (1);
}

int	main(int argc, char **argv)
{
	int i;
	
	if(argc < 2)
		return (0);
	i = 1;
	ft_sort_params(argc, argv);
	while(i < argc)
	{
		ft_putstr(argv[i]);
		ft_putchar('\n');
		i++;
	}
	return (0);
}
