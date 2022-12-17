/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_find_next_prime.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: suyan <suyan@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/13 12:21:21 by suyan             #+#    #+#             */
/*   Updated: 2022/12/13 12:40:47 by suyan            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_is_prime(int nb)
{
	int	i;

	i = 2;
	if (nb <= 1)
		return (0);
	while (i <= nb / 2)
	{
		if (nb % i == 0)
			return (0);
		i++;
	}
	return (1);
}

int	ft_find_next_prime(int nb)
{
	long	lnb;

	lnb = nb;
	while (!ft_is_prime(lnb++))
		continue ;
	return (lnb - 1);
}

/*
#include <stdio.h>
int	main(void)
{
	int		n;
	
	n = ft_find_next_prime(74);
	printf("n = 74, next prime is %d\n", n);

	n = ft_find_next_prime(-8);
	printf("n = -8, next prime is %d\n", n);
	return (0);
}
*/