void	rush(int x, int y);
void	ft_putchar(char c);
int		read_value(char *arg);

int	main(int argc, char *argv[])
{
	int	x;
	int	y;
	int	i;
	int	num;

	num = 0;
	i = 0;
	if (argc == 3)
	{
		x = read_value(argv[1]);
		y = read_value(argv[2]);
		rush(x, y);
	}
	return (0);
}

int	read_value(char *arg)
{
	int	value;
	int	number;
	int	i;

	number = 0;
	i = 0;
	while (arg[i] != '\0')
	{
		value = arg[i] - 48;
		number = number * 10 + value;
		if (value < 0 || value > 9)
		{
			return (0);
		}
		i++;
	}
	return (number);
}
