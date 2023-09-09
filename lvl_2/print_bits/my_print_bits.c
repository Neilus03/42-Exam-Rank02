/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   my_print_bits.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nde-la-f <nde-la-f@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/09 11:26:41 by nde-la-f          #+#    #+#             */
/*   Updated: 2023/09/09 12:19:18 by nde-la-f         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#include <unistd.h>
#include <stdlib.h>  // For atoi

void	print_bits(unsigned char octet)
{
	int				i;
	unsigned char	bit;

	i = 7;
	while (i >= 0)
	{
		bit = (octet >> i) & 1;
		bit += '0';
		write(1, &bit, 1);
		i--;
	}
}

int	main(int ac, char **av)
{
	unsigned char	octet;

	if (ac == 2)
	{
		octet = (unsigned char)atoi(av[1]);
		print_bits(octet);
	}
	return (0);
}
