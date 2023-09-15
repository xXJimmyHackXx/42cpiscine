/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_power.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jagarci2 <jagarci2@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/21 20:01:25 by jagarci2          #+#    #+#             */
/*   Updated: 2023/08/21 21:10:52 by jagarci2         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_iterative_power(int nb, int power)
{
	int	i;
	int	result;

	if (power < 0)
		return (0);
	if (nb == 0 && power == 0)
		return (1);
	else
	{
		result = 1;
		i = 1;
		while (i <= power)
		{	
			result *= nb;
			i++;
		}
	}
	return (result);
}
/*
int	main(void)
{
	int n = 2;
	int p = 3;

	int result = ft_iterative_power(n, p);
	printf("El resultado es: %d\n", result);
	return (0);
}
*/