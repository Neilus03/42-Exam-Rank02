#include <unistd.h>

int	main(int argc, char **argv)
{
	int i = 0;

	if (argc > 1)
	{
		while (argv[1][i])
		{
			if (argv[1][i] >= 'a' && argv[1][i] <= 'z')
			{
				if (argv[1][i] <= 'm')
					argv[1][i] = (argv[1][i] + 13);		
				else if (argv[1][i] >= 'm')
					argv[1][i] = (argv[1][i] - 13);
			}
			else if (argv[1][i] >= 'A' && argv[1][i] <= 'Z')
			{
				if (argv[1][i] <= 'M')
					argv[1][i] = (argv[1][i] + 13);
				
				else if (argv[1][i] >= 'M')
					argv[1][i] = (argv[1][i] - 13);
			}
			write(1, &argv[1][i], 1);
			i++;
				
		} 
	}
	write(1,"\n", 1);	
	return (0);
}
