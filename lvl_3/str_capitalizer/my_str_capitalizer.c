#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

int	is_letter(char c)
{
	return ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z'));
}

int	is_upper(char c)
{
	return (c >= 'A' && c <= 'Z');
}

int	is_space(char c)
{
	return (c == ' ' || c == '\t');
}

void	rstr_capitalizer(char *str)
{
	int i;

	i = 0;
	while (str[i])
	{
		if (is_letter(str[i]))
		{
			if (is_upper(str[i]))
				str[i] += 32;
			if (is_space(str[i - 1]) || !str[i - 1])
				str[i] -= 32;
		}
		ft_putchar(str[i]);
		i++;
	}
	ft_putchar('\n');
}

int		main(int argc, char **argv)
{
	int i;

	if (argc > 1)
	{
		i = 1;
		while (i < argc)
		{
			rstr_capitalizer(argv[i]);
			i++;
		}
	}
	else
	{
		ft_putchar('\n');
	}
	return (0);
}