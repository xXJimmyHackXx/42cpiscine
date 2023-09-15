/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_range.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jagarci2 <jagarci2@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/29 18:50:23 by jagarci2          #+#    #+#             */
/*   Updated: 2023/09/03 13:32:15 by jimmy            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <stdio.h>

int	*ft_range(int min, int max)
{
	int	i;
	int	*array;
	int	size;

	i = 0;
	if (min >= max)
		return (NULL);
	size = max - min;
	array = (int *)malloc(size * sizeof(int));
	if (array != NULL)
	{
		while (i < size)
		{
			array[i] = min + i;
			i++;
		}
	}
	return (array);
}

int	main(void)
{
	int	min = 5;
	int	max = 1000;
	int	i = 0;
	int	*result = ft_range(min, max);

	if (result != NULL)
	{
		printf("array elemnts: ");
		while (i < max - min)
		{
			printf("%d ", result[i]);
			i++;
		}
		printf("\n");
		free(result);
	}
	else
		printf("Invalid range");
	return (0);
}

