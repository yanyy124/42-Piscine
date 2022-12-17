/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_printable.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: suyan <suyan@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/06 09:42:26 by suyan             #+#    #+#             */
/*   Updated: 2022/12/07 11:39:05 by suyan            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_str_is_printable(char *str)
{
	int	i;

	i = 0;
	while (str[i])
	{
		if (str[i] < 32 || str[i] > 126)
		{
			return (0);
		}
		i++;
	}
	return (1);
}

/*
#include <stdio.h>
int    main(void)
{
    int is_a;
	int is_b;

    char a[] = "\t";
	char b[] = "AABBCCDD";

    is_a = ft_str_is_printable(a);
	is_b = ft_str_is_printable(b);
	printf("%s, return %d\n", a, is_a);
	printf("%s, return %d", b, is_b);
}
*/
