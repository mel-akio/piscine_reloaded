int	ft_sqrt(int nb)
{
	double i;

	i = 0;
	while(i * i < nb)
	{
		i++;
	}
	if(i * i == nb)
		return (i);
	else
		return (0);
}
