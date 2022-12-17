/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: suyan <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/28 17:09:52 by suyan             #+#    #+#             */
/*   Updated: 2022/11/29 13:30:15 by suyan            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include<unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	ft_print_number(int i1, int i2, int i3)
{
	ft_putchar(48 + i1);
	ft_putchar(48 + i2);
	ft_putchar(48 + i3);
	if (i1 != 7 || i2 != 8 || i3 != 9)
	{
		ft_putchar(44);
		ft_putchar(32);
	}
}	

void	ft_print_comb(void)
{
	int	i1;
	int	i2;
	int	i3;

	i1 = 0;
	while (i1 <= 7)
	{
		i2 = i1 + 1;
		while (i2 <= 8)
		{
			i3 = i2 + 1;
			while (i3 <= 9)
			{
				ft_print_number(i1, i2, i3);
				i3++;
			}
			i2++;
		}
		i1++;
	}
}

/*
int main(){
     ft_print_comb();
     return 0;
}
*/
