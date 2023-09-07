/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   my_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nde-la-f <nde-la-f@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/07 15:37:24 by nde-la-f          #+#    #+#             */
/*   Updated: 2023/09/07 15:53:14 by nde-la-f         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>
#include <stdlib.h>

char	*ft_strdup(char *src)
{
	int		i;
	char	*out;

	i = 0;
	while (src[i])
		i++;
	out = (char *)malloc(sizeof(char) * (i + 1));
	if (out == NULL)
		return (0);
	i = 0;
	while (src[i])
	{
		out[i] = src[i];
		i++;
	}
	out[i] = '\0';
	return (out);
}
/*
int	main(void)
{
	char	*original;
	char	*duplicate;

	original = "Hello, World!";
	duplicate = ft_strdup(original);
	if (duplicate == NULL)
	{
		printf("Memory allocation failed.\n");
		return (1);
	}
	printf("Original string: %s\n", original);
	printf("Duplicated string: %s\n", duplicate);
	free(duplicate);
	return (0);
}
*/