/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_find_next_prime.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jagarci2 <jagarci2@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/27 03:43:04 by jagarci2          #+#    #+#             */
/*   Updated: 2023/08/29 18:48:57 by jagarci2         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_is_prime(int nb)
{
	int	i;

	i = 2;
	if (nb <= 1)
		return (0);
	while (i <= nb / i)
	{
		if (nb % i == 0)
			return (0);
		i++;
	}
	return (1);
}

int	ft_find_next_prime(int nb)
{
	while (!ft_is_prime(nb))
		nb++;
	return (nb);
}
/*
int	main(void)
{
	int	input_number = 2147483647;
	int	next_prime = ft_find_next_prime(input_number);

	if (input_number < 0)
	{
		printf("Numero negativo\n");
		return (1);
	}


	printf("Siguiente nº primo mayor igual a %d es: %d\n",
		input_number, next_prime);

	return (0);
}
*/