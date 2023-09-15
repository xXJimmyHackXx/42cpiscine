/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jagarci2 <jagarci2@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/15 23:59:07 by jagarci2          #+#    #+#             */
/*   Updated: 2023/08/17 20:03:51 by jagarci2         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strncpy(char *dest, const char *src, unsigned int n)
{
	char	*ptr;

	ptr = dest;
	while (*src != '\0' && n > 0)
	{
		*dest = *src;
		dest++;
		src++;
		n--;
	}
	while (n > 0)
	{
		*dest = '\0';
		dest++;
		n--;
	}
	return (ptr);
}
/*
int	main(void)
{
	char src[] = "Hello";
	char dest[20];
	unsigned int n = 2;

	ft_strncpy(dest, src, n);
	dest[n] = '\0';

	printf("Cadena de origen: %s\n", src);
	printf("Cadena de destino: %s\n", dest);

	return (0);
}
*/