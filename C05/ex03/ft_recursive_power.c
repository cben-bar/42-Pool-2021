/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_recursive_power.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cben-bar <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/08 21:59:04 by cben-bar          #+#    #+#             */
/*   Updated: 2021/09/09 20:48:25 by cben-bar         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

int	ft_recursive_power(int nb, int power)
{
	int	res;
	int	i;

	res = nb;
	i = 0;
	if (power < 0)
		return (0);
	if (power == 0)
		return (1);
	return (res = res * ft_recursive_power(nb, power - 1));
}
