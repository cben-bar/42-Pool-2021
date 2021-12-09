/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcapitalize.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cben-bar <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/03 13:59:12 by cben-bar          #+#    #+#             */
/*   Updated: 2021/09/03 14:14:09 by cben-bar         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strcapitalize(char *str)
{
	int	i;
	int	reset;

	i = 0;
	reset = 1;
	while (str[i] != '\0')
	{
		if ((str[i] >= '0' && str[i] <= '9')
			|| (str[i] >= 'A' && str[i] <= 'Z')
			|| (str[i] >= 'a' && str[i] <= 'z'))
		{
			if (reset && (str[i] >= 'a' && str[i] <= 'z'))
				str[i] -= 32;
			if (!reset && (str[i] >= 'A' && str[i] <= 'Z'))
				str[i] += 32;
			reset = 0;
		}
		else
			reset = 1;
		i++;
	}
	return (str);
}
