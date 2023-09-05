/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   my_alpha_mirror.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nde-la-f <nde-la-f@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/05 14:47:43 by nde-la-f          #+#    #+#             */
/*   Updated: 2023/09/05 14:49:37 by nde-la-f         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	mirror(char c)
{
	if (c >= 'a' && c <= 'z')
		return ('z' - c + 'a');
	if (c >= 'A' && c <= 'Z')
		return ('Z' - c + 'A');
	return (c);
}

int	main(int ac, char **av)
{
	int	i;

	i = 0;
	if (ac == 2)
	{
		while (av[1][i])
		{
			av[1][i] = mirror(av[1][i]);
			i++;
		}
	}
	write(1, av[1], i);
	write(1, "\n", 1);
	return (0);
}
