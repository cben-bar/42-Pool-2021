/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cben-bar <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/06 16:32:03 by cben-bar          #+#    #+#             */
/*   Updated: 2021/09/06 17:24:59 by cben-bar         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#define FALSE 0
#define TRUE 1

int	ft_strlen(char *str)
{
	int	counter;

	counter = 0;
	while (str[counter] != '\0')
	{
		counter++;
	}
	return (counter);
}

int	ft_research(char *to_find, char *str, int index)
{
	int	i;

	i = 0;
	while (to_find[i])
	{
		if (to_find[i] != str[index])
			return (FALSE);
		i++;
		index++;
	}
	return (TRUE);
}

char	*ft_strstr(char *str, char *to_find)
{
	int	i;

	if (!(ft_strlen(to_find)))
		return (str);
	i = 0;
	while (str[i])
	{
		if (ft_research(to_find, str, i))
			return (&str[i]);
		i++;
	}
	return (0);
}
