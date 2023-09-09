/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   swap_bites.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nde-la-f <nde-la-f@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/09 14:04:44 by nde-la-f          #+#    #+#             */
/*   Updated: 2023/09/09 14:16:16 by nde-la-f         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

unsigned char	swap_bits(unsigned char octet)
{
	return ((octet >> 4) | (octet << 4));
}

int	main(int ac, char **av)
{
	if (ac == 2)
	{
		unsigned char octet = (unsigned char)atoi(av[1]);
		unsigned char result = swap_bits(octet);

		printf("Original: %d\n", octet);
		printf("Swapped: %d\n", result);
	}
	else
	{
		printf("Usage: %s <byte>\n", av[0]);
	}
	return (0);
}
