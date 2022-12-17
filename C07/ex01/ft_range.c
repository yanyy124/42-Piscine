/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_range.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: suyan <suyan@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/14 04:07:22 by suyan             #+#    #+#             */
/*   Updated: 2022/12/14 16:02:45 by suyan            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	*ft_range(int min, int max)
{
	int	i;
	int	*range;

	if (min >= max)
	{
		return (0);
	}
	range = malloc(sizeof(int) * (max - min));
	i = 0;
	while (min < max)
	{
		range[i] = min;
		i++;
		min++;
	}
	return (range);
}

/*
#include<unistd.h>
int    main(void)
{
    int        *ptr;
    int        i;

    ptr = ft_range('A', 'Z');
    i = 0;
    while (i < 26)
    {
        write(1, &ptr[i], 1);
        write(1, " ", 1);
        i++;
    }
    return (0);
}
*/
