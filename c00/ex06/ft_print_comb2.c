/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb2.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jagarci2 <jagarci2@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/14 22:39:14 by jagarci2          #+#    #+#             */
/*   Updated: 2023/08/21 14:51:12 by jagarci2         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	print(int i, int j)

{
	ft_putchar('0' + i / 10);
	ft_putchar('0' + i % 10);
	ft_putchar(' ');
	ft_putchar('0' + j / 10);
	ft_putchar('0' + j % 10);
	if (i != 98 || j != 99)
	{
		ft_putchar(',');
		ft_putchar(' ');
	}
}

void	ft_print_comb2(void)
{
	int	i;
	int	j;

	i = 0;
	j = 1;
	while (i <= 98)
	{
		while (j <= 99)
		{
			print(i, j);
			j++;
		}
		i++;
		j = i + 1;
	}
}
/*
int	main(void)
{
	ft_print_comb2();
	return (0);
}
*/