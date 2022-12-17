/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_lowercase.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: suyan <suyan@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/06 09:23:12 by suyan             #+#    #+#             */
/*   Updated: 2022/12/06 21:28:21 by suyan            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_str_is_lowercase(char *str)
{
	int	i;

	i = 0;
	while (str[i])
	{
		if (str[i] < 97 || str[i] > 122)
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

    char a[] = "v12a3";
	char b[] = "abc";

    is_a = ft_str_is_lowercase(a);
	is_b = ft_str_is_lowercase(b);
	printf("%s, return %d\n", a, is_a);
	printf("%s, return %d", b, is_b);
}
*/
