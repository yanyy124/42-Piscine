/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sqrt.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: suyan <suyan@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/12 22:37:18 by suyan             #+#    #+#             */
/*   Updated: 2022/12/12 22:37:45 by suyan            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_sqrt(int nb)
{
	long	a;
	long	i;

	if (nb < 1)
	{
		return (0);
	}
	i = 1;
	a = nb;
	while (i * i < a)
	{
		i++;
	}
	if (i * i == a)
	{
		return (i);
	}
	return (0);
}

/*
#include<stdio.h>
int	main(void)
{
	int a;
	
	a = 25;
	printf("Num = %d, square root = %d\n", a, ft_sqrt(a));
}
*/