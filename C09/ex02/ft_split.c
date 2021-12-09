/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cben-bar <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/21 19:59:45 by cben-bar          #+#    #+#             */
/*   Updated: 2021/09/22 11:04:40 by cben-bar         ###   ########lyon.fr   */
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

int	ft_check_charset(char *str, char c)
{
	int	i;

	i = 0;
	while (str[i])
	{
		if (str[i] == c)
			return (1);
		i++;
	}
	return (0);
}

char	*ft_strndup(char *src, unsigned int n)
{
	char			*dest;
	unsigned int	i;

	dest = malloc(sizeof(char) * (n + 1));
	i = 0;
	while (src[i] && i < n)
	{
		dest[i] = src[i];
		i++;
	}
	dest[i] = 0;
	return (dest);
}

char	**ft_split(char *str, char *charset)
{
	char	**string;
	int		i_beg;
	int		i_end;
	int		i;
	int		len;

	len = ft_strlen(str);
	string = malloc(sizeof(char *) * (len + 1));
	i_beg = 0;
	i_end = 0;
	i = 0;
	while (i_end <= len)
	{
		if (str[i_end] == 0 || ft_check_charset(charset, str[i_end]))
		{
			if (i_end > i_beg)
				string[i++] = ft_strndup (str + i_beg, i_end - i_beg);
			i_beg = i_end + 1;
		}
		i_end++;
	}
	string[i] = NULL;
	return (string);
}
