/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr_non_printable.c                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cben-bar <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/05 13:22:40 by cben-bar          #+#    #+#             */
/*   Updated: 2021/09/05 19:56:20 by cben-bar         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c)
{
	write (1, &c, 1);
}

void	ft_print_hexad(unsigned char s)
{
	char	*basehexa;

	basehexa = "0123456789abcdef";
	ft_putchar('\\');
	ft_putchar(basehexa[s / 16]);
	ft_putchar(basehexa[s % 16]);
}

void	ft_putstr_non_printable(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		if (str[i] < 32 || str[i] > 126)
		{
			ft_print_hexad((unsigned char)str[i]);
		}
		else
		{
			ft_putchar(str[i]);
		}
		i++;
	}
}
