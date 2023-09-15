/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcapitalize.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jagarci2 <jagarci2@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/16 14:31:51 by jagarci2          #+#    #+#             */
/*   Updated: 2023/08/17 18:23:47 by jagarci2         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	letternum(char c)
{
	return ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z')
		|| (c >= '0' && c <= '9'));
}

void	capitalize(char *word)
{
	if (*word >= 'a' && *word <= 'z')
		*word = *word - 'a' + 'A';
	else if (*word >= 'A' && *word <= 'Z')
		*word = *word - 'A' + 'a';
}

void	process_word(char *str, int *cap)
{
	if (letternum(*str))
	{
		if (*cap && *str >= 'a' && *str <= 'z')
			capitalize(str);
		else if (!*cap && *str >= 'A' && *str <= 'Z')
			*str = *str - 'A' + 'a';
		*cap = 0;
	}
	else
		*cap = 1;
}

char	*ft_strcapitalize(char *str)
{
	int	cap;
	int	i;

	cap = 1;
	i = 0;
	while (str[i] != '\0')
	{
		process_word(&str[i], &cap);
		i++;
	}
	return (str);
}
/*
int	main(void)
{
	char	str[] = "HOLA";

	printf("Texto original: %s\n", str);

	char	*result = ft_strcapitalize(str);

	printf("Texto convertido: %s\n", result);

	return (0);
}
*/