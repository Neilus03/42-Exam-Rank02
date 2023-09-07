/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   my_do_op.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nde-la-f <nde-la-f@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/05 15:20:18 by nde-la-f          #+#    #+#             */
/*   Updated: 2023/09/07 15:36:18 by nde-la-f         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>
#include <stdlib.h>

int	main(int ac, char *av[])
{
	if (ac == 4)
	{
		if (av[2][0] == '+')
			printf("%d", (atoi(av[1]) + atoi(av[3])));
		else if (av[2][0] == '-')
			printf("%d", (atoi(av[1]) - atoi(av[3])));
		else if (av[2][0] == '*')
			printf("%d", (atoi(av[1]) * atoi(av[3])));
		else if (av[2][0] == '/')
			printf("%d", (atoi(av[1]) / atoi(av[3])));
		else if (av[2][0] == '%')
			printf("%d", (atoi(av[1]) % atoi(av[3])));
	}
	printf("\n");
	return (0);
}
