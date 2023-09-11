#include <unistd.h>
#include <stdio.h>
#include <stdlib.h>

int	hidenp(char *s1, char *s2)
{
	int	i;
	int	j;

	i = 0;
	j = 0;
	while (s1[i] && s2[j])
	{
		if (s1[i] == s2[j])
			i++;
		j++;
	}
	return (!s1[i]);
}

int	main(int argc, char **argv)
{
	int	result;

	if (argc != 3)
	{
		write(1, "\n", 1);
		return (0);
	}
	result = hidenp(argv[1], argv[2]);
	if (result == 0)
		write(1, "0\n", 2);
	else
		write(1, "1\n", 2);
	return (0);
}
