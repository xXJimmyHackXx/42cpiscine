/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlowcase.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jagarci2 <jagarci2@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/16 12:17:41 by jagarci2          #+#    #+#             */
/*   Updated: 2023/08/16 12:23:38 by jagarci2         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strlowcase(char *str)
{
	char	*ptr;

	ptr = str;
	while (*ptr)
	{
		if (*ptr >= 'A' && *ptr <= 'Z')
			*ptr += 32;
		ptr++;
	}
	return (str);
}
/*
int	main(void)
{
	char str[] = "HOLA MUNDO";

	printf("Mayusculas: %s\n", str);
	ft_strlowcase(str);
	printf("Minusculas: %s\n", str);
}
*/