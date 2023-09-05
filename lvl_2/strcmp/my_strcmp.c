/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   my_strcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nde-la-f <nde-la-f@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/05 16:43:03 by nde-la-f          #+#    #+#             */
/*   Updated: 2023/09/05 16:57:18 by nde-la-f         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>
#include <stdlib.h>

int	ft_strcmp(char *s1, char *s2)
{
	int i;

	i = 0;

	while (s1[i] && s2[i])
	{
		if (s1[i] == s2[i])
			i ++;
	}
	return (s1[i] - s2[i]);
}

int main(int ac, char **av)
{
	int res;

	res = ft_strcmp(av[1], av[2]);
	printf("%d",res);
	return (0);
}
