/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   my_ft_atoi_base.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nde-la-f <nde-la-f@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/11 10:10:27 by nde-la-f          #+#    #+#             */
/*   Updated: 2023/09/11 10:57:40 by nde-la-f         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int	is_space(char c)
{
	return (c == ' ' || (c >= 9 && c <= 13));
}

int	get_val(char c)
{
	if (c >= '0' && c <= '9')
		return (c - '0');
	if (c >= 'a' && c <= 'f')
		return (c - 'a' + 10);
	if (c >= 'A' && c <= 'F')
		return (c - 'A' + 10);
	return (-1);
}

int	ft_atoi_base(const char *str, int str_base)
{
	int	res;
	int	sign;
	int	val;

	res = 0;
	sign = 1;
	while (is_space(*str))
		str++;
	if (*str == '-')
	{
		sign = -1;
		str++;
	}
	val = get_val(*str);
	while (val >= 0 && val < str_base)
	{
		res = res * str_base + val;
		str++;
		val = get_val(*str);
	}
	return (res * sign);
}

int	main(void)
{
	printf("%d\n", ft_atoi_base("1a", 16)); // Should print 26
	printf("%d\n", ft_atoi_base("1010", 2)); // Should print 10
	printf("%d\n", ft_atoi_base("-1a", 16)); // Should print -26
	printf("%d\n", ft_atoi_base("123", 10)); // Should print 123
	printf("%d\n", ft_atoi_base("12", 4)); // Should print 6
	return (0);
}
