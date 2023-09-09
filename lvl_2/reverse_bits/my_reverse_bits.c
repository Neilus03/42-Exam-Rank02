/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   my_reverse_bits.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nde-la-f <nde-la-f@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/09 12:32:10 by nde-la-f          #+#    #+#             */
/*   Updated: 2023/09/09 13:22:11 by nde-la-f         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

unsigned char	reverse_bits(unsigned char octet)
{
	int				i;
	unsigned char	res;

	i = 8;
	res = 0;
	while (i > 0)
	{
		res *= 2; //make space for the next bit, shifting res one poistion to the left 
		res += (octet % 2); //extracts the least significant bit of octet. and adds it to res
		octet /= 2; //eliminates last bit from octet
		i--;
	}
	return (res);
}

int main(int ac, char **av)
{
	if (ac == 2)
	{
		unsigned char octet = (unsigned char)atoi(av[1]);
		unsigned char result = reverse_bits(octet);

		printf("Original: %d\n", octet);
		printf("Reversed: %d\n", result);
	}
	else
	{
		printf("Usage: %s <byte>\n", av[0]);
	}
	return (0);
}
