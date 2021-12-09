/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush03.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ngeorge <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/05 18:08:48 by ngeorge           #+#    #+#             */
/*   Updated: 2021/09/05 18:09:29 by ngeorge          ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

void	ft_putchar(char c);

void	ft_printer(char a, char b, char c, int x)
{
	int	i;

	i = 0;
	while (i < x)
	{
		if (i == 0)
		{
			ft_putchar(a);
		}
		else if (i > 0 && i < x - 1)
		{
			ft_putchar(b);
		}
		else if (i == x - 1)
		{
			ft_putchar(c);
		}
		i++;
	}
	ft_putchar('\n');
}

void	rush(int x, int y)
{
	int	i;

	i = 0;
	if (x <= 0 || y <= 0)
	{
		return ;
	}
	while (i < y)
	{
		if (i == 0)
		{
			ft_printer('A', 'B', 'C', x);
		}
		else if (i > 0 && i < y - 1)
		{
			ft_printer('B', ' ', 'B', x);
		}
		else if (i == y - 1)
		{
			ft_printer('A', 'B', 'C', x);
		}
		i++;
	}
}
