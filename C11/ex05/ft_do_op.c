/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_do_op.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cben-bar <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/22 21:35:13 by cben-bar          #+#    #+#             */
/*   Updated: 2021/09/23 00:02:03 by cben-bar         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "ft.h"

int	ft_add(int nb, int nb2)
{
	return (nb + nb2);
}

int	ft_sou(int nb, int nb2)
{
	return (nb - nb2);
}

int	ft_div(int nb, int nb2)
{
	return (nb / nb2);
}

int	ft_mul(int nb, int nb2)
{
	return (nb * nb2);
}

int	ft_mod(int nb, int nb2)
{
	return (nb % nb2);
}
