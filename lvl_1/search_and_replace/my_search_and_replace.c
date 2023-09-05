/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   my_search_and_replace.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nde-la-f <nde-la-f@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/05 14:40:23 by nde-la-f          #+#    #+#             */
/*   Updated: 2023/09/05 14:43:41 by nde-la-f         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

char	replace(char a, char b)
{
	a = b;
	return (a);
}

int	main(int ac, char **av)
{
	int	i;

	i = 0;
	if ((ac == 4) & !av[2][1] & !av[3][1])
	{
		while (av[1][i])
		{
			if (av[1][i] == av[2][0])
				av[1][i] = replace(av[2][0], av[3][0]);
			write(1, &av[1][i], 1);
			i++;
		}
		write (1, "\n", 1);
	}
}
