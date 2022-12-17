/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: suyan <suyan@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/30 14:12:04 by suyan             #+#    #+#             */
/*   Updated: 2022/12/06 21:17:43 by suyan            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strcpy(char *dest, char *src)
{
	int	i;

	i = 0;
	while (src[i])
	{
		dest[i] = src[i];
		i++;
	}
	dest[i] = '\0';
	return (dest);
}

/*
#include <stdio.h>
int	main(void)
{
	char	final[100]; 
	char	dest[100];
	char src[] = "hello World";

	printf("before: \nsrc = %s\n", src);

	printf("after: \nsrc = %s\nnew_src = %s\n ", src, ft_strcpy(dest, src));
	return (0);
}
*/
