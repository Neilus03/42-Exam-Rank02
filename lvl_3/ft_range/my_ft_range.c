#include <unistd.h>
#include <stdio.h>
#include <stdlib.h>

int	ft_abs(int a, int b)
{
	if (a - b >= 0)
		return (a - b);
	return (b - a);
}

int	*ft_range(int start, int end)
{
	int	len = ft_abs(end, start) + 1;
	int	*arr = (int *)malloc(len * sizeof(int));
	int	i = 0;
	int	aux;

	if (end <= start)
	{
		while (end <= start)
		{
			arr[i] = start;
			start--;
			i++;
		}
	}
	else
	{
		while (start <= end)
		{
			arr[i] = start;
			i++;
			start++;
		}
	}
	return (arr);
}

int	main(void)
{
	int start = 1;
	int end = -6;
	int *range = ft_range(start, end);

	printf("Array from %d to %d: ", start, end);
	for (int i = 0; i <= abs(end - start); ++i)
		printf("%d ", range[i]);
	printf("\n");
	free(range);
	return (0);
}
