#include <unistd.h>
#include <stdio.h>
#include <stdlib.h> 

unsigned int	lcm(unsigned int a, unsigned int b)
{
	unsigned int	i;

	if (a == 0 || b == 0)
		return (0);
	i = (a >= b ? a : b);
	while (!(i % a == 0 && i % b == 0))
		i++;
	return (i);
}

int	main(int ac, char **av)
{
	printf("%d\n", lcm(atoi(av[1]), atoi(av[2])));
	return (0);
}
