void	ft_putchar(char c);
void	column(int x, char a_edge, char b_edge, char mid_c, char line_b);
void	line(int x, int y, char space, char mid_c, char line_b);

void	rush(int x, int y)
{
	char	mid_c;
	char	a_edge;
	char	b_edge;
	char	line_b;
	char	space;

	mid_c = 'B';
	a_edge = 'A';
	b_edge = 'C';
	line_b = '\n';
	space = ' ';
	if (x > 0 && y > 0)
	{
		column(x, a_edge, b_edge, mid_c, line_b);
		line(x, y, space, mid_c, line_b);
		if (y > 1)
		{
			column(x, a_edge, b_edge, mid_c, line_b);
		}
	}
}

// Cria a largura
void	column(int x, char a_edge, char b_edge, char mid_c, char line_b)
{
	int	i;

	i = 0;
	ft_putchar(a_edge);
	if (x >= 2)
	{
		while (i < (x - 2))
		{
			ft_putchar(mid_c);
			i++;
		}
		ft_putchar(b_edge);
	}
	ft_putchar(line_b);
}

// Cria a linha
void	line(int x, int y, char space, char mid_c, char line_b)
{
	int	i;

	i = 0;
	if (y >= 2)
	{
		while (i < (y - 2))
		{
			column(x, mid_c, mid_c, space, line_b);
			i++;
		}
	}
}
