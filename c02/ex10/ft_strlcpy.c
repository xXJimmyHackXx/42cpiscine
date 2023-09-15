/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jagarci2 <jagarci2@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/17 18:27:29 by jagarci2          #+#    #+#             */
/*   Updated: 2023/08/22 13:58:42 by jagarci2         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>

unsigned int	size_of(char *str)
{
	unsigned int	i;

	i = 0;
	while (str[i] != '\0')
		i++;
	return (i);
}

unsigned int	ft_strlcpy(char *dest, char *src, unsigned int size)
{
	unsigned int	i;

	i = 0;
	if (size > 0)
	{
		while (src[i] != '\0' && i < size - 1)
		{
			dest[i] = src[i];
			i++;
		}
		dest[i] = '\0';
	}
	return (size_of(src));
}

int	main(void)
{
	char src[] = "Hello, world!";
	char dest[] = "josefa";
	unsigned int len = ft_strlcpy(dest, src, 4);

	printf("strlcpy_original: %lu\n", strlcpy(dest, src, 4));
	printf("Source: %s\n", src);
	printf("Dest: %s\n", dest);
	printf("Len_Src: %u\n", len);

	return (0);
}
