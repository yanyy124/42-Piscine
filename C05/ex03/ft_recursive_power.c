/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_recursive_power.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: suyan <suyan@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/12 22:27:32 by suyan             #+#    #+#             */
/*   Updated: 2022/12/12 22:30:23 by suyan            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_recursive_power(int nb, int power)
{
	int	i;

	i = nb;
	if (power < 0)
	{
		return (0);
	}
	else if (power == 0)
	{
		return (1);
	}
	else
	{
		i *= ft_recursive_power(nb, power -1);
	}
	return (i);
}

/*
#include<stdio.h>
int	main(void)
{
	printf("%d\n", ft_recursive_power(4, 2));
}
*/