/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   my_add_prime_sum.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nde-la-f <nde-la-f@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/11 09:11:58 by nde-la-f          #+#    #+#             */
/*   Updated: 2023/09/11 09:51:50 by nde-la-f         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int	ft_atoi(char *s)
{
	int	res;

	res = 0;
	while (*s)
		res = res * 10 + *s++ - 48;
	return (res);
}

void	put_nbr(int n)
{
	char	digit;

	if (n >= 10)
		put_nbr(n / 10);
	digit = n % 10 + '0';
	write(1, &digit, 1);
}

int	is_prime(int n)
{
	int	i;

	if (n == 0 || n == 1)
		return (0);
	i = 2;
	while (i <= (n / 2))
	{
		if (n % i == 0)
			return (0);
		i++;
	}
	return (1);
}

int	main(int ac, char **av)
{
	int	i;
	int	sum;

	if (ac == 2)
	{
		i = 2;
		sum = 0;
		while (i <= (ft_atoi(av[1])))
		{
			if (is_prime(i))
				sum += i;
			i++;
		}
		put_nbr(sum);
		write(1, "\n", 1);
	}
	else
		write(1, "0\n", 2);
	return (0);
}
