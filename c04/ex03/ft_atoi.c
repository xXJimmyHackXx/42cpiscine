/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marvin <marvin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/19 19:02:39 by jagarci2          #+#    #+#             */
/*   Updated: 2023/09/03 13:36:25 by marvin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_atoi(char *str)
{
	int	sign;
	int	result;
	int	digit_count;

	sign = 1;
	result = 0;
	digit_count = 0;
	while ((*str >= 9 && *str <= 13) || *str == 32)
		str++;
	while (*str == '-' || *str == '+')
	{
		if (*str == '-')
			sign = -sign;
		str++;
	}
	while (*str >= '0' && *str <= '9')
	{
		result = result * 10 + (*str - '0');
		str++;
		digit_count++;
	}
	if (digit_count == 0)
		return (0);
	return (sign * result);
}
/*
int	main(void)
{
	int	r;
	r = ft_atoi("+-+-+----+-+-+++-+-+-121212asdasdasd1212");
	printf("%d", r);
}
*/