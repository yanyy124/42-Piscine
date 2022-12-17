/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_uppercase.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: suyan <suyan@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/06 09:36:51 by suyan             #+#    #+#             */
/*   Updated: 2022/12/06 09:37:04 by suyan            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_str_is_uppercase(char *str)
{
	int	i;

	i = 0;
	while (str[i])
	{
		if (str[i] < 65 || str[i] > 90)
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

    char a[] = "Abcd123";
	char b[] = "AABBCCDD";

    is_a = ft_str_is_uppercase(a);
	is_b = ft_str_is_uppercase(b);
	printf("%s, return %d\n", a, is_a);
	printf("%s, return %d", b, is_b);
}
*/
