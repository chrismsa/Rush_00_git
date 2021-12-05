/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush04.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: coder <coder@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/05 22:28:39 by coder             #+#    #+#             */
/*   Updated: 2021/12/05 22:40:20 by coder            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_putchar(char c);
void	column(int x, char a_edge, char b_edge, char mid_c);
void	line(int x, int y, char space, char mid_c);

void	rush(int x, int y)
{
	char	mid_c;
	char	a_edge;
	char	b_edge;
	char	space;

	mid_c = 'B';
	a_edge = 'A';
	b_edge = 'C';
	space = ' ';
	if (x > 0 && y > 0)
	{
		column(x, a_edge, b_edge, mid_c);
		line(x, y, space, mid_c);
		if (y > 1)
		{
			column(x, b_edge, a_edge, mid_c);
		}
	}
}

void	column(int x, char a_edge, char b_edge, char mid_c)
{
	int		i;
	char	line_b;

	line_b = '\n';
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

void	line(int x, int y, char space, char mid_c)
{
	int	i;

	i = 0;
	if (y >= 2)
	{
		while (i < (y - 2))
		{
			column(x, mid_c, mid_c, space);
			i++;
		}
	}
}
