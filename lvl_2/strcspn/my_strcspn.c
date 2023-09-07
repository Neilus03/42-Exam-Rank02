/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   my_strcspn.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nde-la-f <nde-la-f@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/07 15:08:36 by nde-la-f          #+#    #+#             */
/*   Updated: 2023/09/07 15:34:05 by nde-la-f         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

size_t	ft_strcspn(const char *s, const char *reject)
{
	int	i;
	int	j;

	i = 0;
	j = 0;
	while (s[i])
	{
		j = 0;
		while (reject[j])
		{
			if (s[i] != reject[j])
				j++;
			else
				return (i);
		}
		i++;
	}
	return (i);
}

int	main(int ac, char **av)
{
	size_t	res;

	res = ft_strcspn(av[1], av[2]);
	printf("Result of my strcspn: %zu \n", res);
	return (0);
}
