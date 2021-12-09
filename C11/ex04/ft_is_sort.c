/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_is_sort.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cben-bar <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/22 19:38:07 by cben-bar          #+#    #+#             */
/*   Updated: 2021/09/23 14:44:02 by cben-bar         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

int	ft_sort_asc(int *tab, int len, int (*f)(int, int))
{
	int	i;

	i = 0;
	while (i < len - 1)
	{
		if ((*f)(tab[i], tab[i + 1]) > 0)
			return (0);
		i++;
	}
	return (1);
}

int	ft_sort_desc(int *tab, int len, int (*f)(int, int))
{
	int	i;

	i = 0;
	while (i < len - 1)
	{
		if ((*f)(tab[i], tab[i + 1]) < 0)
			return (0);
		i++;
	}
	return (1);
}

int	ft_is_sort(int *tab, int length, int (*f)(int, int))
{
	if (ft_sort_asc(tab, length, f)
		|| ft_sort_desc(tab, length, f))
	{
		return (1);
	}
	return (0);
}
