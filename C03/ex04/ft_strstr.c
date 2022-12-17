/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: suyan <suyan@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/06 22:39:04 by suyan             #+#    #+#             */
/*   Updated: 2022/12/06 23:15:22 by suyan            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strstr(char *str, char *to_find)
{
	int	i;
	int	is_same;

	if (*to_find == '\0')
		return (str);
	while (*str != '\0')
	{
		if (*str == *to_find)
		{
			i = 0;
			is_same = 0;
			while (to_find[i] != '\0')
			{
				if (str[i] != to_find[i])
					is_same = 1;
				i++;
			}
			if (is_same == 0)
				return (str);
		}
		str++;
	}
	return (0);
}

/*
#include <stdio.h>
#include <string.h>

int		main(void)
{
	char str[] = "42 adelaide cool!";
	char to_find[] = "adelaide";

	printf("%s\n", ft_strstr(str, to_find));
	printf("%s\n", strstr(str, to_find));
	return (0);
}
*/