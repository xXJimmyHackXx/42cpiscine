/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jagarci2 <jagarci2@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/17 20:56:37 by jagarci2          #+#    #+#             */
/*   Updated: 2023/08/29 14:43:47 by jagarci2         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_strncmp(char *s1, char *s2, unsigned int n)
{
	unsigned int	i;

	i = 0;
	if (n > 0)
	{
		while (s1[i] != '\0' && s2[i] != '\0' && i < n - 1)
		{
			if (s1[i] != s2[i])
				return (s1[i] - s2[i]);
			i++;
		}
	}
	else
		return (0);
	return (s1[i] - s2[i]);
}

int	main(void)
{
	int result = ft_strncmp("Hola", "Holw", 1);
	printf("%d", result);
	return(0);
}
