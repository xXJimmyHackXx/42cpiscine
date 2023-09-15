/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jagarci2 <jagarci2@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/15 19:21:17 by jagarci2          #+#    #+#             */
/*   Updated: 2023/08/17 19:45:37 by jagarci2         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strcpy(char *dest, char *src)
{
	char	*ptr;

	ptr = dest;
	while (*src != '\0')
	{
		*dest = *src;
		dest++;
		src++;
	}
	*dest = '\0';
	return (ptr);
}
/*
int	main(void)
{
	char	*src;

	src = "Naaaaashe555555eee";
	char dest[0];

	char	*result = ft_strcpy(dest, src);

	printf("Copied string: %s\n", result);

	return (0);
}
*/