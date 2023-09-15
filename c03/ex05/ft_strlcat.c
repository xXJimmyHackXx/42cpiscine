/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jagarci2 <jagarci2@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/19 15:09:27 by jagarci2          #+#    #+#             */
/*   Updated: 2023/08/20 19:49:48 by jagarci2         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

unsigned int	ft_strlen(const char *str)
{
	unsigned int	len;

	len = 0;
	while (str[len])
		len++;
	return (len);
}

unsigned int	ft_strlcat(char *dest, const char *src, unsigned int size)
{
	unsigned int	dest_len;
	unsigned int	src_len;
	unsigned int	total_len;
	unsigned int	i;

	dest_len = ft_strlen(dest);
	src_len = ft_strlen(src);
	total_len = dest_len + src_len;
	i = 0;
	if (size <= dest_len)
		return (src_len + size);
	while (src[i] && dest_len + 1 < size)
	{
		dest[dest_len] = src[i];
		dest_len++;
		i++;
	}
	dest[dest_len] = '\0';
	return (total_len);
}

/*int	main(void)
{
	char dest[20] = "ajdslkj";
	const char *src = "asdfdddddddsdd";
	unsigned int size = sizeof(dest);

	unsigned int result = ft_strlcat(dest, src, size);
	printf("Result: %u\n", result);
	printf("Concatenated string: %s\n", dest);

	return (0);
}*/