/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_fibonacci.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jagarci2 <jagarci2@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/22 17:41:45 by jagarci2          #+#    #+#             */
/*   Updated: 2023/08/22 18:11:51 by jagarci2         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_fibonacci(int index)
{
	if (index > 1)
		return (ft_fibonacci(index - 1) + ft_fibonacci(index -2));
	else if (index == 1)
		return (1);
	else if (index == 0)
		return (0);
	else
		return (-1);
}
/*
int	main(void)
{
	int index = 10;
	int result = ft_fibonacci(index);

	if (result >= 0)
		printf
			("El numero de Fibonacci en la posicion %d es: %d\n", index, result);
	else
		printf("Posicion invalida\n");

	return (0);
}
*/