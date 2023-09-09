/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   my_max.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nde-la-f <nde-la-f@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/09 11:07:34 by nde-la-f          #+#    #+#             */
/*   Updated: 2023/09/09 11:22:32 by nde-la-f         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int	max(int *tab, unsigned int len)
{
	int	max;
	int	i;

	i = 0;
	max = tab[i];
	while (i < len)
	{
		if (tab[i] >= max)
			max = tab[i];
		i++;
	}
	return (max);
}

int	main(void)
{
	int	arr[] = {54, 23, 45, 1};
	int	*tab;
	int	len;

	len = sizeof(arr) / sizeof(arr[0]);
	tab = arr;
	printf("%d", max(tab, len));
}
