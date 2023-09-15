/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ultimate_div_mod.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jagarci2 <jagarci2@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/15 15:23:16 by jagarci2          #+#    #+#             */
/*   Updated: 2023/08/15 15:35:14 by jagarci2         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_ultimate_div_mod(int *a, int *b)
{
	int	t;

	t = *a;
	*a = t / *b;
	*b = t % *b;
}
/*
int	main(void)
{
	int num1 = 10;
	int num2 = 2;

	ft_ultimate_div_mod(&num1, &num2);

	printf("División: %d\n", num1);
	printf("Módulo: %d\n", num2);

	return (0);
}
*/