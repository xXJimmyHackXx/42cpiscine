/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlen.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jagarci2 <jagarci2@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/15 16:02:22 by jagarci2          #+#    #+#             */
/*   Updated: 2023/08/15 17:15:11 by jagarci2         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	ft_strlen(char *str)
{
	int	j;

	j = 0;
	while (str[j] != '\0')
		j++;
	return (j);
}
/*
int	main(void)
{
	char	input[] = "Hola, este es un ejemplo.";
	int	length = ft_strlen(input);

	printf("La longitud de la cadena es: %d\n", length);

	return (0);
}
*/