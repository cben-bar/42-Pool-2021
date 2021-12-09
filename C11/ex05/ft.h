/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft.h                                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cben-bar <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/22 23:52:34 by cben-bar          #+#    #+#             */
/*   Updated: 2021/09/23 04:19:15 by cben-bar         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_H
# define FT_H

# include <unistd.h>

int		ft_add(int nb, int nb2);

int		ft_sou(int nb, int nb2);

int		ft_div(int nb, int nb2);

int		ft_mul(int nb, int nb2);

int		ft_mod(int nb, int nb2);

int		ft_check_op(char *str);

int		ft_strlen(char *str);

void	ft_putchar(char c);

void	ft_putstr(char *str);

int		ft_atoi(char *str);

void	ft_putnbr(int nb);

void	ft_dispatch(int (*op_tab[])(int, int));

void	ft_print_nb(int nb);

#endif
