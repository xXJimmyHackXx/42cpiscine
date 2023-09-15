/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strupcase.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jagarci2 <jagarci2@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/16 11:48:04 by jagarci2          #+#    #+#             */
/*   Updated: 2023/08/16 12:16:53 by jagarci2         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strupcase(char *str)
{
	char	*ptr;

	ptr = str;
	while (*ptr)
	{
		if (*ptr >= 'a' && *ptr <= 'z')
			*ptr -= 32;
		ptr++;
	}
	return (str);
}
/*
int	main(void)
{
	char str[] = "Hola, mundo";

	printf("Minusculas: %s\n", str);
	ft_strupcase(str);
	printf("Mayusculas: %s\n", str);
	return (0);
}
*/