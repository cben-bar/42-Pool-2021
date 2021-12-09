/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush00.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: egrand-b <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/04 23:07:31 by egrand-b          #+#    #+#             */
/*   Updated: 2021/09/05 02:28:31 by cben-bar         ###   ########lyon.fr   */
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
			ft_printer('o', '-', 'o', x);
		}
		else if (i > 0 && i < y - 1)
		{
			ft_printer('|', ' ', '|', x);
		}
		else if (i == y - 1)
		{
			ft_printer('o', '-', 'o', x);
		}
		i++;
	}
}
