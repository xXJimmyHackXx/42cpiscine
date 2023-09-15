/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_numbers.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jagarci2 <jagarci2@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/14 21:07:44 by jagarci2          #+#    #+#             */
/*   Updated: 2023/08/14 21:12:01 by jagarci2         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_print_numbers(void)
{
	char	init_num;

	init_num = '0';
	while (init_num <= '9')
	{
		write(1, &init_num, 1);
		init_num++;
	}
}
/*
int	main(void)
{
	ft_print_numbers();
	return (0);
}
*/