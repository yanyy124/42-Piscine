/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_swap.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: suyan <suyan@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/29 21:35:07 by suyan             #+#    #+#             */
/*   Updated: 2022/11/29 22:53:08 by suyan            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/* #include <stdio.h> */

void	ft_swap(int *a, int *b)
{
	int	c;

	c = *a;
	*a = *b;
	*b = c;
}

/*
int	main(void)
{
	int	a;
	int	b;

	a = 10;
	b = 20;
	printf("before a = %d\n", a);
	printf("before b = %d\n", b);
	ft_swap(&a, &b);
	printf("after a = %d\n", a);
	printf("after b = %d\n", b);
}
*/