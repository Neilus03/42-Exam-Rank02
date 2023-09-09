/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   my_wdmatch.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nde-la-f <nde-la-f@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/09 14:32:27 by nde-la-f          #+#    #+#             */
/*   Updated: 2023/09/09 15:33:15 by nde-la-f         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdlib.h>
#include <stdio.h>

void	ft_putstr(char const *str)
{
	int	i = 0;

	while (str[i])
	{
		write(1, &str[i], 1);
		i++;
	}
}

int	main(int ac, char **av)
{
	int	i;
	int	j;

	if (ac == 3)
	{
		i = 0;
		j = 0;
		while (av[2][j])
		{
			if (av[2][j] == av[1][i])
				i ++;
			j++;
			if (!av[1][i])
				ft_putstr(av[1]);
		}
	}
	write(1, "\n", 1);
}
