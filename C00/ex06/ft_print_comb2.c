/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb2.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cben-bar <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/01 16:09:14 by cben-bar          #+#    #+#             */
/*   Updated: 2021/09/01 18:58:44 by cben-bar         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_print_nbr(int nb)
{
	nb += '0';
	write (1, &nb, 1);
}

void	ft_print_comb2(void)
{
	int	n1;
	int	n2;

	n1 = 0;
	while (n1 <= 98)
	{
		n2 = n1 + 1;
		while (n2 <= 99)
		{
			ft_print_nbr(n1 / 10);
			ft_print_nbr(n1 % 10);
			write (1, " ", 1);
			ft_print_nbr(n2 / 10);
			ft_print_nbr(n2 % 10);
			if (!(n1 == 98 && n2 == 99))
				write (1, ", ", 2);
			n2++;
		}
		n1++;
	}
}
