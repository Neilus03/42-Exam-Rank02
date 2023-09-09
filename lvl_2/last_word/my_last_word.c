/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   my_last_word.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nde-la-f <nde-la-f@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/09 09:51:33 by nde-la-f          #+#    #+#             */
/*   Updated: 2023/09/09 11:01:07 by nde-la-f         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int	ft_strlen(char *str)
{
	int	i;

	i = 0;
	while (str[i])
		i++;
	return (i);
}

int	main(int ac, char **av)
{
	int	i;
	int	max;
	int	min;

	if (ac == 2)
	{
		i = ft_strlen(av[1]) - 1;
		while (i >= 0 && (av[1][i] == '\t' || av[1][i] == ' '))
			i--;
		max = i;
		while (av[1][i] != 9 && av[1][i] != 32 && i >= 0)
			i--;
		min = i + 1;
		while (min <= max)
		{
			write(1, &av[1][min], 1);
			min++;
		}
	}
	write(1, "\n", 1);
	return (0);
}
/*
//PRUEBAS

int	main(int ac, char **av)
{
	int	i;
	int	sc;
	int	wc;

	if (ac == 2)
	{
		i = 0;
		sc = 0;
		wc = 0;
		while (av[1][i])
		{
			write(1, &av[1][i], 1);
			i++;
		}
		i--;
		while (av[1][i])
		{
			write(1, &av[1][i], 1);
			i--;
		}
	}
	write(1, "\n", 1);
	return (0);
}
*/