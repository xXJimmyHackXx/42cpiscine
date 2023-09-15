/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jagarci2 <jagarci2@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/19 12:49:36 by jagarci2          #+#    #+#             */
/*   Updated: 2023/08/19 15:09:38 by jagarci2         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strstr(char *str, char *to_find)
{
	char	*s;
	char	*t;

	if (*to_find == 0)
		return (str);
	while (*str)
	{
		s = str;
		t = to_find;
		while (*s && *t && *s == *t)
		{
			s++;
			t++;
		}
		if (!*t)
			return (str);
		str++;
	}
	return (0);
}
/*
int	main(void)
{
	char str [] = "Hello, world, how are u?";
	char to_find [] = "ll";

	char *result = ft_strstr(str, to_find);
	
	if (result != NULL)
		printf("string encontrada\n");
	return (0);
}
*/