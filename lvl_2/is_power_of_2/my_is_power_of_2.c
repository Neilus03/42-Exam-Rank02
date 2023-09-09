/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   my_is_power_of_2.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nde-la-f <nde-la-f@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/09 09:39:41 by nde-la-f          #+#    #+#             */
/*   Updated: 2023/09/09 09:47:54 by nde-la-f         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int	is_power_of_2(unsigned int n)
{
	if (n == 0)
		return (0);
	while (n % 2 == 0)
		n /= 2;
	if (n == 1)
		return (1);
	return (0);
}

int	main(int ac, char **av)
{
	if (is_power_of_2(atoi(av[1])) == 1)
		printf("%s is a power of 2", av[1]);
	else
		printf("%s is NOT a power of 2", av[1]);
	return (0);
}
