/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cben-bar <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/22 21:48:19 by cben-bar          #+#    #+#             */
/*   Updated: 2021/09/23 13:14:03 by cben-bar         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "ft.h"

void	ft_dispatch(int (*op_tab[5])(int, int))
{
	op_tab[0] = ft_add;
	op_tab[1] = ft_sou;
	op_tab[2] = ft_div;
	op_tab[3] = ft_mul;
	op_tab[4] = ft_mod;
}

int	main(int argc, char **argv)
{
	int		av3;
	int		(*op_tab[5])(int, int);
	char	*base;
	int		curs;

	if (argc != 4)
		return (0);
	if (!(ft_check_op(argv[2])))
	{
		ft_putstr("0\n");
		return (0);
	}
	av3 = ft_atoi(argv[3]);
	base = "+-/*%";
	curs = 0;
	while (base[curs] != argv[2][0] && base[curs])
		curs++;
	ft_dispatch(op_tab);
	if (base[curs] == '/' && av3 == 0)
		write(1, "Stop : division by zero\n", 24);
	else if (base[curs] == '%' && av3 == 0)
		write(1, "Stop : modulo by zero\n", 22);
	else
		ft_print_nb(op_tab[curs](ft_atoi(argv[1]), av3));
	return (0);
}
