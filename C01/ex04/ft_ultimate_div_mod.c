/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ultimate_div_mod.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: suyan <suyan@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/29 22:55:33 by suyan             #+#    #+#             */
/*   Updated: 2022/11/29 23:19:05 by suyan            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/* #include <stdio.h> */

void	ft_ultimate_div_mod(int *a, int *b)
{
	int	c;

	if (*b != 0)
	{
		c = *a;
		*a = c / (*b);
		*b = c % (*b);
	}
}

/*
int	main(void)
{
	int	a;
	int	b;

	a = 5;
	b = 0;
	ft_ultimate_div_mod(&a, &b);
	printf("a = %d  b = %d", a, b);
	return (0);
}
*/