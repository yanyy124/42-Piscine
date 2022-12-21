/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_show_tab.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: suyan <suyan@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/18 13:03:30 by suyan             #+#    #+#             */
/*   Updated: 2022/12/18 13:03:31 by suyan            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include "ft_stock_str.h"

void	put_char(char c)
{
	write(1, &c, 1);
}

void	put_str(char *str)
{
	while (*str)
	{
		put_char(*str);
		str++;
	}
}

void	put_nbr(int nbr)
{
	if (nbr < 0)
	{
		nbr = -nbr;
		put_char('-');
	}
	if (nbr < 10)
		put_char(nbr + '0');
	if (nbr > 9)
	{
		put_nbr(nbr / 10);
		put_nbr(nbr % 10);
	}
}

void	ft_show_tab(struct s_stock_str *par)
{
	while (par->str != 0)
	{
		put_str(par->str);
		put_char('\n');
		put_nbr(par->size);
		put_char('\n');
		put_str(par->copy);
		put_char('\n');
		par++;
	}
}
/*
int	main(int argc, char **argv)
{
	t_stock_str	*tab;
	tab = ft_strs_to_tab(argc,argv);
	ft_show_tab(tab);
	return (0);
}
*/
