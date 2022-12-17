/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ultimate_range.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: suyan <suyan@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/14 04:26:15 by suyan             #+#    #+#             */
/*   Updated: 2022/12/14 16:01:54 by suyan            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	ft_ultimate_range(int **range, int min, int max)
{
	int	i;
	int	len;

	len = max - min;
	if (min >= max)
	{
		*range = NULL;
		return (0);
	}
	*range = (int *)malloc(sizeof(int) * len);
	i = 0;
	while (min < max)
	{
		range[0][i] = min;
		i++;
		min++;
	}
	return (len);
}

/*
#include<unistd.h>
int    main(void)
{
    int    *tmp = NULL;
    int    **range = &tmp;
    int    *ptr = NULL;
    int    i;
    int    n;

    n = ft_ultimate_range(range, 'A', 'Z');
    i = 0;
    ptr = *range;
    while (i < n)
    {
        write(1, &ptr[i], 1);
        write(1, " ", 1);
        i++;
    }
    return (0);
}
*/