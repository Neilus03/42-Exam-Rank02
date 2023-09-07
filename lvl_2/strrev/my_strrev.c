/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   my_strrev.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nde-la-f <nde-la-f@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/07 16:06:56 by nde-la-f          #+#    #+#             */
/*   Updated: 2023/09/07 16:29:37 by nde-la-f         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>
#include <stdlib.h>

char	*ft_strrev(char *str)
{
	int		i;
	int		j;
	char	*aux;

	i = 0;
	while (str[i])
		i++;
	aux = (char *)malloc(sizeof(char) * (i + 1));
	j = 0;
	while (str[j])
	{
		aux[i - 1] = str[j];
		j++;
		i--;
	}
	i = 0;
	while (aux[i])
	{
		str[i] = aux[i];
		i++;
	}
	str[i] = '\0';
	free(aux);
	return (str);
}

int	main(void)
{
	char	s[] = "holaa";

	printf("%s", ft_strrev(s));
	return (0);
}
