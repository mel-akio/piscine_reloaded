void ft_putchar(char c);

void ft_print_numbers(void)
{
	char i;
	
	i = '0';
	while(i != '9'+1)
	{
		ft_putchar(i);
		i++;
	}
}
