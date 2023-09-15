/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jagarci2 <jagarci2@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/27 21:46:40 by jagarci2          #+#    #+#             */
/*   Updated: 2023/08/28 16:21:32 by jagarci2         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <stdio.h>
#include <stddef.h>

int	lenstr(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
		i++;
	return (i + 1);
}

char	*ft_strdup(char *src)
{
	char	*dup;
	int		len;
	int		i;

	i = 0;
	len = lenstr(src);
	dup = (char *)malloc(len);
	while (src[i] != '\0')
	{
		dup[i] = src[i];
		i++;
	}
	dup[i] = '\0';
	return (dup);
}
/*
int	main(void)
{
	char	*original = "¡Hola, esto es una prueba!";
	char	*copied = ft_strdup(original);

	if (copied != NULL)
	{
		printf("Original: %s\n", original);
		printf("Copia: %s\n", copied);
		free(copied);
	}
	else
	{
		printf("Error al duplicar la cadena.\n");
	}
	return (0);
}
*/