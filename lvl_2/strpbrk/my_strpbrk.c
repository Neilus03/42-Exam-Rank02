/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   my_strpbrk.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nde-la-f <nde-la-f@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/07 15:54:05 by nde-la-f          #+#    #+#             */
/*   Updated: 2023/09/07 16:07:24 by nde-la-f         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>
#include <stdlib.h>

char	*ft_strpbrk(const char *s1, const char *s2)
{
	int	i;

	i = 0;
	if (!s1 || !s2)
	{
		return (0);
	}
	while (*s1)
	{
		i = 0;
		while (s2[i])
		{
			if (*s1 == s2[i])
				return ((char *)s1);
			i++;
		}
		s1++;
	}
	return (NULL);
}
/*
int main(void)
{
    const char *s1 = "This is a test string.";
    const char *s2 = "aeiou";

    char *result = ft_strpbrk(s1, s2);

    if (result != NULL)
    {
        printf("Found character: %c\n", *result);
    }
    else
    {
        printf("No matching character found.\n");
    }

    return 0;
}
*/