#include <unistd.h>
#include <stdlib.h>
#include <stdio.h>

int	main(int ac, char **av)
{
	unsigned int	i;
	int				a;
	int				b;

	if (ac == 3)
	{
		a = atoi(av[1]);
		b = atoi(av[2]);
		i = (a < b ? a : b);
		while (i)
		{
			if (!(a % i == 0 && b % i == 0))
				i--;
			else
				break ;
		}
		printf("%d\n", i);
	}
	else
		printf("\n");
	return (0);
}
