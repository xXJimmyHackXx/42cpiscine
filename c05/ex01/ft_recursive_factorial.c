/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_recursive_factorial.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jagarci2 <jagarci2@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/21 18:06:11 by jagarci2          #+#    #+#             */
/*   Updated: 2023/08/21 20:00:20 by jagarci2         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_recursive_factorial(int nb)
{
	if (nb == 0)
		return (1);
	if (nb < 0)
		return (0);
	return (nb * ft_recursive_factorial(nb -1));
}
/*
int	main(void)
{
	int	num = 5;
	int	result = ft_recursive_factorial(num);

	if (result == 0)
		printf("El numero ingresado no es valido.\n");
	else
		printf("El factorial de %d es %d\n", num, result);
	return (0);
}
*/