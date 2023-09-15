/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_alphabet.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jagarci2 <jagarci2@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/14 20:32:30 by jagarci2          #+#    #+#             */
/*   Updated: 2023/08/14 20:42:51 by jagarci2         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_print_alphabet(void)
{
	char	init_letter;

	init_letter = 'a';
	while (init_letter <= 'z')
	{
		write(1, &init_letter, 1);
		init_letter++;
	}
}
/*
int	main(void)
{
	ft_print_alphabet();
	return (0);
}
*/