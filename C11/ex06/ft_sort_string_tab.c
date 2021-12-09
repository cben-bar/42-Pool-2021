/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_string_tab.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cben-bar <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/23 00:40:12 by cben-bar          #+#    #+#             */
/*   Updated: 2021/09/23 04:59:42 by cben-bar         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

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

int	ft_strcmp(char *s1, char *s2)
{
	int	i;

	i = 0;
	while (s1[i] && s2[i] && s1[i] == s2[i])
	{
		i++;
	}
	return (s1[i] - s2[i]);
}

void	ft_sort_string_tab(char **tab)
{
	int		i1;
	int		i2;
	char	*tmp;

	if (tab[0] == 0)
		return ;
	i1 = 0;
	i2 = 1;
	tmp = 0;
	while (tab[i1 + 1])
	{
		while (tab[i2])
		{
			if (ft_strcmp(tab[i1], tab[i2]) > 0)
			{
				tmp = tab[i1];
				tab[i1] = tab[i2];
				tab[i2] = tmp;
			}
			i2++;
		}
		i1++;
		i2 = i1 + 1;
	}
}
