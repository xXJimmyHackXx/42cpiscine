/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_factorial.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jagarci2 <jagarci2@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/20 19:52:07 by jagarci2          #+#    #+#             */
/*   Updated: 2023/08/21 21:39:46 by jagarci2         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_iterative_factorial(int nb)
{
	int	i;
	int	result;

	result = 1;
	i = 1;
	if (nb >= 0)
	{
		while (i <= nb)
		{
			result *= i;
			i++;
		}
	}
	else
		return (0);
	return (result);
}
/*
int	main(void)
{
	int	nb = 5;
	int	result = ft_iterative_factorial(nb);
	printf("Factorial: %d\n", result);
}
*/