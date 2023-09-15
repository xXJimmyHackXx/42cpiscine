/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ultimate_range.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marvin <marvin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/03 13:29:35 by marvin            #+#    #+#             */
/*   Updated: 2023/09/03 13:52:45 by marvin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <stdio.h>

int     ft_ultimate_range(int **range, int min, int max)
{
        int     size;
        int     i;

        i = 0;
        if (min >= max)
        {
                *range = NULL;
                return (0);
        }
        size = max - min;
        *range = (int *)malloc(size * sizeof(int));
        if (*range == NULL)
                return (-1);
        while (i < size)
        {
                (*range)[i] = min + i;
                i++;
        }
        return (size);
}

int     main(void)
{
        int *result;
        int min_value = 5;
        int max_value = 999;
        int size;
        int i = 0;

        size = ft_ultimate_range(&result, min_value, max_value);
        if (result == NULL)
                printf("El rango es inválido.\n");
        else if (size == -1)
                printf("Error de asignación de memoria.\n");
        else
        {
                while (i < size)
                {
                        printf("%d ", result[i]);
                        i++;
                }
                printf("\n");
                free(result);
        }
        return (0);
}