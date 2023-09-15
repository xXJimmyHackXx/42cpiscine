/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sqrt.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jagarci2 <jagarci2@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/23 02:18:33 by jagarci2          #+#    #+#             */
/*   Updated: 2023/08/29 18:45:15 by jagarci2         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include <stdio.h>

int	suply(int nb)
{
	if (nb < 0)
		return (0);
	else
		return (nb);
}

int	ft_sqrt(int nb)
{
	int	mid;
	int	st;
	int	end;
	int	result;

	st = 1;
	end = nb;
	result = 0;
	suply(nb);
	while (st <= end)
	{
		mid = st + (end - st) / 2;
		if (mid <= nb / mid)
		{
			result = mid;
			st = mid + 1;
		}
		else
			end = mid - 1;
	}
	if (result * result != nb)
		return (0);
	return (result);
}
/*
int	main(void)
{
	int	a = ft_sqrt(2147483647);

	printf("%d", a);
}
*/