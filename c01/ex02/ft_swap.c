/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_swap.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jagarci2 <jagarci2@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/15 12:29:47 by jagarci2          #+#    #+#             */
/*   Updated: 2023/08/15 12:47:05 by jagarci2         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_swap(int *a, int *b)
{
	int	t;

	t = *a;
	*a = *b;
	*b = t;
}
/*
int	main(void)
{
	int num1 = 5;
	int num2 = 10;

	printf("Antes del swap:\n");
	printf("num1 = %d\n", num1);
	printf("num2 = %d\n", num2);

	ft_swap(&num1, &num2);

	printf("Despues del swap:\n");
	printf("num1 = %d\n", num1);
	printf("num2 = %d\n", num2);

	return (0);
}
*/