/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_alpha.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jagarci2 <jagarci2@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/16 00:16:18 by jagarci2          #+#    #+#             */
/*   Updated: 2023/08/19 18:27:04 by jagarci2         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_str_is_alpha(char *str)
{
	if (*str == '\0')
		return (1);
	while (*str != '\0')
	{
		if ((*str < 'A' || *str > 'Z') && (*str < 'a' || *str > 'z'))
		{
			return (0);
		}
		str++;
	}
	return (1);
}
/*
int	main(void)
{
	char str1[] = "HelloWorld";
	char str2[] = "Hello123";
	char str3[] = "";

	int result1 = ft_str_is_alpha(str1);
	int result2 = ft_str_is_alpha(str2);
	int result3 = ft_str_is_alpha(str3);

	printf("Resultado 1: %d\n", result1);
	printf("Resultado 2: %d\n", result2);
	printf("Resultado 3: %d\n", result3);

	return (0);
}
*/