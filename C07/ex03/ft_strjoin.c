/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cben-bar <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/14 13:57:32 by cben-bar          #+#    #+#             */
/*   Updated: 2021/09/14 18:30:28 by cben-bar         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

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

char	*ft_strcat_adapt(char *dest, char **strs, char *sep, int size)
{
	int	i_strs;
	int	i_for_dest;
	int	i_for_sep;
	int	i_for_strs;

	i_strs = -1;
	i_for_dest = 0;
	while (++i_strs < size)
	{
		i_for_sep = -1;
		i_for_strs = -1;
		while (strs[i_strs][++i_for_strs])
		{
			dest[i_for_dest] = strs[i_strs][i_for_strs];
			i_for_dest++;
		}
		while (sep[++i_for_sep] && i_strs < size - 1)
		{
			dest[i_for_dest] = sep[i_for_sep];
			i_for_dest++;
		}
	}
	dest[i_for_dest] = '\0';
	return (dest);
}

int	ft_give_size(int size, char **strs, char *sep)
{
	int	len;
	int	i;

	len = 0;
	len = ft_strlen(sep) * (size - 1);
	i = 0;
	while (i < size)
	{
		len += ft_strlen(strs[i]);
		i++;
	}
	return (i);
}

char	*ft_strjoin(int size, char **strs, char *sep)
{
	char	*if_fail;
	char	*dest;

	if_fail = malloc(sizeof(char) * 1);
	*if_fail = 0;
	if (size == 0)
		return (if_fail);
	dest = malloc(sizeof(char) * ft_give_size(size, strs, sep) + 1);
	if (dest)
	{
		dest = ft_strcat_adapt(dest, strs, sep, size);
		return (dest);
	}
	return (NULL);
}
