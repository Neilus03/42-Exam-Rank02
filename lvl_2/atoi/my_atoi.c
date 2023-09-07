/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   my_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nde-la-f <nde-la-f@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/05 16:05:31 by nde-la-f          #+#    #+#             */
/*   Updated: 2023/09/07 17:13:00 by nde-la-f         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdlib.h>
#include <stdio.h>

int	ft_atoi(const char *str)
{
	int	res;
	int	sign;
	int	i;

	res = 0;
	sign = 1;
	i = 0;
	while (str[i])
	{
		while (str[i] == ' ' || (str[i] >= 9 && str[i] <= 13))
			i++;
		if (str[i] == '+' || str[i] == '-')
		{
			if (str[i] == '-')
				sign *= -1;
			i++;
		}
		while (str[i] > '0' && str[i] < '9')
		{
			res = res * 10 + str[i] - '0';
			i++;
		}
	}
	return (sign * res);
}

int	main(int ac, char **av)
{
	printf("My atoi: %d \n", ft_atoi(av[1]));
	printf("Original atoi: %d \n", atoi(av[1]));
	return (0);
}
