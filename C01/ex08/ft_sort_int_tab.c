/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_int_tab.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: suyan <suyan@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/14 07:31:55 by suyan             #+#    #+#             */
/*   Updated: 2022/12/15 12:42:27 by suyan            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_sort_int_tab(int *tab, int size)
{
	int	i;
	int	j;
	int	tmp;

	i = 0;
	j = 0;
	while (i < size)
	{
		while (j < size)
		{
			if (tab[i] > tab[j])
			{
				tmp = tab[i];
				tab[i] = tab[j];
				tab[j] = tmp;
			}
			j++;
		}
		i++;
		j = i + 1;
	}
}

/*
#include <stdio.h>
int     main(void)
{
    int     index = 0;
    int     arr[5] = {3,5,4,1,2};
    ft_sort_int_tab(arr, 5);
    while(index < 5)
    {
        printf("%d ",arr[index]);
        index++;
    }
    return 0;
}
*/