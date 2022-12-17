/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rev_int_tab.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: suyan <suyan@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/14 07:31:11 by suyan             #+#    #+#             */
/*   Updated: 2022/12/15 12:41:38 by suyan            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_rev_int_tab(int *tab, int size)
{
	int	i;
	int	tmp;

	i = 0;
	while (i < (size / 2))
	{
		tmp = tab[i];
		tab[i] = tab[size - 1 - i];
		tab[size - 1 - i] = tmp;
		i++;
	}
}

/*
#include <stdio.h>
int     main(void)
{
    int     arr[5] = {1,2,3,4,5};
    int     index;

    index = 0;
    printf("before: ");
    while(index < 5)
    {
        printf("%d, ", arr[index]);
        index++;
    }
    printf("\n");

    ft_rev_int_tab(arr, 5);
    index = 0;
    printf("after: ");
    while(index < 5)
    {
        printf("%d ", arr[index]);
        index++;
    }
    printf("\n");
    return (0);
}
*/