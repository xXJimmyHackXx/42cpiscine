/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_div_mod.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jagarci2 <jagarci2@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/15 12:41:28 by jagarci2          #+#    #+#             */
/*   Updated: 2023/08/15 15:22:35 by jagarci2         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_div_mod(int a, int b, int *div, int *mod)
{
	*div = a / b;
	*mod = a % b;
}
/*
int	main(void)
{
	int	a = 17;
	int	b = 4;
	int	division;
	int	modulo;

	ft_div_mod(a, b, &division, &modulo);

	printf("División: %d\n", division);
	printf("Módulo: %d\n", modulo);

	return (0);
}
*/