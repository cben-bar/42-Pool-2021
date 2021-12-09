/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_base.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cben-bar <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/07 20:14:11 by cben-bar          #+#    #+#             */
/*   Updated: 2021/09/07 23:53:05 by cben-bar         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#define FALSE 0

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

int	ft_strlen(char *str)
{
	int	counter;

	counter = 0;
	while (str[counter])
	{
		counter++;
	}
	return (counter);
}

int	ft_confirm_base(char *base)
{
	int	i;
	int	j;

	if (!ft_strlen(base) || ft_strlen(base) < 2)
		return (FALSE);
	i = 0;
	while (base[i])
	{
		j = i + 1;
		while (base[j])
		{
			if (base[i] == base[j])
				return (FALSE);
			j++;
		}
		if (base[i] == '+' || base[i] == '-')
			return (FALSE);
		i++;
	}
	return (1);
}

void	ft_putnbr_base(int nbr, char *base)
{
	long	nb_long;

	if (!ft_confirm_base(base))
		return ;
	nb_long = (long)nbr;
	if (nb_long < 0)
	{	
		ft_putchar('-');
		nb_long *= -1;
	}
	if (nb_long >= ft_strlen(base))
		ft_putnbr_base(nb_long / ft_strlen(base), base);
	ft_putchar(base[nb_long % ft_strlen(base)]);
}
