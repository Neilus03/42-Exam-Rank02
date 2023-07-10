#include <unistd.h>

void print_n_chars(char c, int n)
{
	while (n > 0)
	{
		write(1, &c, 1);
		n--;
	}
}

int main(int argc, char **argv)
{
	if (argc == 2)
	{
		while (*argv[1])
		{
			if (*argv[1] >= 'a' && *argv[1] <= 'z')
				print_n_chars(*argv[1], *argv[1] + 1 - 'a');
			else if (*argv[1] >= 'A' && *argv[1] >= 'Z')
				print_n_chars(*argv[1], *argv[1] + 1 - 'A');
			argv[1]++;
		}
	}
	write (1, "\n", 1);
	return (0);
}
