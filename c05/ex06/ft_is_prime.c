/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_is_prime.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jagarci2 <jagarci2@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/27 02:58:34 by jagarci2          #+#    #+#             */
/*   Updated: 2023/08/29 18:45:22 by jagarci2         ###   ########.fr       */
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
/*
int	main(int argc, char **argv)
{
	int	numero = atoi (argv[1]);

	if (numero != 0)
	{
		if (ft_is_prime(numero))
			printf("%d es un numero primo.\n", numero);
		else
			printf("%d no es un numero primo.\n", numero);
	}

	return (0);
}
*/