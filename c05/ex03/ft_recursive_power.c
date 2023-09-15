/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_recursive_power.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jagarci2 <jagarci2@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/21 21:11:53 by jagarci2          #+#    #+#             */
/*   Updated: 2023/08/22 18:14:09 by jagarci2         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_recursive_power(int nb, int power)
{
	if (power < 0)
		return (0);
	if (power == 0)
	{
		if (nb == 0)
			return (1);
		else
			return (1);
	}
	return (nb * ft_recursive_power(nb, power - 1));
}
/*
int	main(void)
{
	int	base = 2;
	int	exponent = 5;
	int	result = ft_recursive_power(base, exponent);

	printf("%d raised to the power of %d is: %d\n", base, exponent, result);

	return (0);
}
*/