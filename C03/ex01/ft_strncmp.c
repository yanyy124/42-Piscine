/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: suyan <suyan@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/06 13:13:54 by suyan             #+#    #+#             */
/*   Updated: 2022/12/06 23:34:50 by suyan            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_strncmp(char *s1, char *s2, unsigned int n)
{
	unsigned int	i;

	i = 0;
	while ((s1[i] || s2[i]) && (i < n))
	{
		if (s1[i] < s2[i])
		{
			return (-1);
		}
		if (s1[i] > s2[i])
		{
			return (1);
		}
		i++;
	}
	return (0);
}

/*
#include <stdio.h>
int main()
{
	printf("%d\n", ft_strncmp("abc", "abc", 3));
    printf("%d\n", ft_strncmp("abca", "abcd", 4));
	printf("%d\n", ft_strncmp("abcf", "abcF", 4));
}
*/