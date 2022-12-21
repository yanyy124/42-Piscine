/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strs_to_tab.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: suyan <suyan@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/18 13:03:24 by suyan             #+#    #+#             */
/*   Updated: 2022/12/18 13:03:25 by suyan            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include "ft_stock_str.h"

int	str_len(char *str)
{
	int	i;

	i = 0;
	while (str[i])
		i++;
	return (i);
}

char	*str_cp(char *src)
{
	int		i;
	char	*ptr;

	i = str_len(src);
	ptr = malloc((i + 1) * sizeof(char));
	if (!ptr)
		return (NULL);
	i = 0;
	while (src[i])
	{
		ptr[i] = src[i];
		i++;
	}
	ptr[i] = '\0';
	return (ptr);
}

struct s_stock_str	*ft_strs_to_tab(int ac, char **av)
{
	int				i;
	t_stock_str		*ptr;

	ptr = malloc((ac + 1) * sizeof(t_stock_str));
	if (!ptr)
		return (NULL);
	i = 0;
	while (i < ac)
	{
		ptr[i].str = av[i];
		ptr[i].size = str_len(av[i]);
		ptr[i].copy = str_cp(av[i]);
		i++;
	}
	ptr[i].str = 0;
	return (ptr);
}
/*
#include <stdio.h>
int	main(int argc, char **argv)
{
	t_stock_str	*tab;
	tab = ft_strs_to_tab(argc, argv);
	int i = 0;
	while (i < argc)
	{
		printf("%s | %d | %s\n", tab[i].str, tab[i].size, tab[i].copy);
		i++;
	}
	free(tab);
	return (0);
}
*/
